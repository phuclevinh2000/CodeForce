#include<stdio.h>

int main()
{
    int n, i, j, temp, min=0, count=0, rem=0;
    printf("Enter the size of Array : ");
    scanf_s("%d", &n);
    int a[100];
    printf("Enter elements : \n");
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }

    for (i = 1; i < n; ++i)
    {
        for (j = 0; j < (n - i); ++j)
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
    }

    printf("\nArray after c bubble sort: ");

    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }

    //now count for the number appear
    min = a[0];
    int CountMax=0;
    for (i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
 
        }
        else if (a[i] != a[i + 1])
        {
 
            if (count > CountMax)
            {
                min = a[i];
                CountMax = count;
            }
            //if (count = rem)
            rem = count;
            count = 0;
        }
    }
    printf("\n The number that we need to find is %d", min);
}
