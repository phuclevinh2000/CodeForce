
 
 #include <bits/stdc++.h>

 using namespace std;
  int countDistinct(int arr[], int n)
  {
      // First sort the array so that all
      // occurrences become consecutive
      sort(arr, arr + n);
  
      // Traverse the sorted array
      int res = 0;
      for (int i = 0; i < n; i++) {
  
          // Move the index ahead while
          // there are duplicates
          while (i < n - 1 && arr[i] == arr[i + 1])
              i++;
  
          res++;
      }
  
      return res;
  }
 int main()
 {
    int t;
    cin >> t;
    while(t--)
    {
      int n;
      cin >> n;
      int arr[n];
      for(int i=0; i<n; i++)
      {
        cin >> arr[i];
      }
      cout << countDistinct(arr,n) << endl;
    }
 }
