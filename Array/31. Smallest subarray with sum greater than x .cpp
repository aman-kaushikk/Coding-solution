// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:

    int smallestSubWithSum(int arr[], int n, int x)
    {
        // Your code goes here   
        //sort(arr, arr + n);
        int cout=0;
        int mi=INT_MAX;
        int i=0,j=0;
        while(i<n and j<n)
        {
            while(cout<=x and j<n)
                {cout += arr[j++];}
            while(cout>x and i<j)
            {
                mi =min(mi, j-i);
                cout -=arr[i];
                i++;
            }
        }
        return(mi);
    }
    
};

// { Driver Code Starts.

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int n,x;
		cin>>n>>x;
		int a[n];
		for(int i=0;i<n;i++)
		cin>>a[i];
		Solution obj;
		cout<<obj.smallestSubWithSum(a,n,x)<<endl;
	}
	return 0;
}  // } Driver Code Ends
