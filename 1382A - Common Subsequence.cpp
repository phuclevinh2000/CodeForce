#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//input
		int n,m, count1=0, count2=0, output=0, status=0;
		cin >> n >> m;
		int arr1[1001], arr2[1001], dis1[1001], dis2[1001];
		for(int i=0; i<n; i++)
		{
			cin >> arr1[i];
		}
		for(int i=0; i<m; i++)
		{
			cin >> arr2[i];
		}

		//sort array in ascending order
		sort(arr1, arr1+n);
		sort(arr2, arr2+m);
		
		//distinct element in array 1
		for (int i=0; i<n; i++)
	    {
	        // Check if the picked element is already printed
	        int j;
	        for (j=0; j<i; j++)
	           if (arr1[i] == arr1[j])
	               break;
	  
	        // If not printed earlier, then print it
	        if (i == j)
	          {
	          	dis1[count1]=arr1[i];
	          	count1++;
			  }
	    }
	    
	    //distinct element in array 2
		for (int i=0; i<m; i++)
	    {
	        // Check if the picked element is already printed
	        int j;
	        for (j=0; j<i; j++)
	           if (arr2[i] == arr2[j])
	               break;
	  
	        // If not printed earlier, then print it
	        if (i == j)
	          {
	          	dis2[count2]=arr2[i];
	          	count2++;
			  }
	    }

	    //for(int i=0; i<count1; i++) cout << dis1[i] << " ";
	    //check if find answer
	    for(int i=0; i<count1; i++)
	    {
	    	for(int j=0; j<count2; j++)
	    	{
	    		if(dis2[j]==dis1[i]) 
	    		{
	    			output=dis2[j];
	    			status=1;
	    			break;
				}
			}
			if(status==1) break;
		}
		
		//print the answer
		if(status==0) cout << "NO\n";
		else 
		{
			cout << "YES\n" << status << " " << output << endl;
		}
	}
}
