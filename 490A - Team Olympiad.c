//490A - Team Olympiad.c
#include <stdio.h>
 
int main(void)
{
    int n, x[5001], y[5001], z[5001],a=0,b=0,c=0;
    scanf("%d",&n);
    int arr[5001];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    //make a count var, set the value of the i th element as the number in arr[]
    for(int i=0; i<n;i++)
    {
        if(arr[i]==1)
        {
            x[a]=i+1;
            a++;
        }
        else if(arr[i]==2)
        {
            y[b]=i+1;
            b++;
        }
        else if(arr[i]==3)
        {
            z[c]=i+1;
            c++;
        }
    }
    
    //find the minimum number of team we have by compare a,b,c
    if(a==0 || b==0 || c==0) printf("0");
    else 
    {
    int min;
    if(a>b) min=b;
    else min=a;
    if(min>c) min=c;
    printf("%d\n", min);
    
    //print the position of the elements
    for(a=0,b=0,c=0;a<min,b<min,c<min;a++,b++,c++)
    {
        printf("%d %d %d\n",x[a], y[b], z[c] );
    }
    }
}
