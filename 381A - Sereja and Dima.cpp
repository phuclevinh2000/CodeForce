#include <bits/stdc++.h>
 
 using namespace std;
 
 int main()
 {
  int n;
  cin >> n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin >> arr[i];
  }
 
  //solve
  int Sere=0, Dima=0, count=0, right=n-1, left=0;
  while(right!=left)
  {
    if(arr[right]>arr[left])
    {
      if(count%2==0) Sere+=arr[right];
      else Dima+=arr[right];
      //cout << "right " << Sere << " " << Dima << endl; 
      right--;
      count++;
    }
    else 
    {
      if(count%2==0) Sere+=arr[left];
      else Dima+=arr[left];
       //cout << "left " << Sere << " " << Dima << endl; 
      left++;
      count++;    }
  }
  if(n%2==0) Dima+=arr[right];
  else Sere+=arr[right];
  cout << Sere << " " << Dima;
 }
