//	if the i+1 element is bigger than the i element 2 unit, then NO

#include <stdio.h>
#include <string.h>

int main(void)
{
  int t;
  scanf("%d", &t);
  while(t--)
  {
    // input
    int n, temp, status=0;
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
      scanf("%d", &arr[i]);
    }

    //soft by ascending order
    for(int i=0; i<n; i++)
    {
      for(int j=i+1; j<n ; j++)
      {
        if(arr[i]>arr[j])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
      }
    }

    //check
    for(int i=1; i<n; i++)
    {
      if((arr[i]-arr[i-1])>1) 
      {
        status=1;
        break;
      }
    }
    //print the result
    if(status==1) printf("NO\n");
    else printf("YES\n");
  }
}
