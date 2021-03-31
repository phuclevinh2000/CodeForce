 //1385B - Restore the Permutation by Merger
 
 #include <bits/stdc++.h>

 using namespace std;

void printDistinct(int arr[], int n)
{
    // Pick all elements one by one
    for (int i=0; i<n; i++)
    {
        // Check if the picked element is already printed
        int j;
        for (j=0; j<i; j++)
           if (arr[i] == arr[j])
               break;
  
        // If not printed earlier, then print it
        if (i == j)
          cout << arr[i] << " ";
    }
}
 int main()
 {
   int t;
   cin >> t;
   while(t--)
   {
     int n;
     cin >>n;
     int arr[n*2];
     for(int i=0; i<n*2; i++)
     {
       cin >>arr[i];
     }
     printDistinct(arr, n*2);
     cout << "\n";
   }
 }
