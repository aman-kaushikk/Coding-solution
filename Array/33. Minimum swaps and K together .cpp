// { Driver Code Starts
// C++ program to find minimum swaps required
// to club all elements less than or equals
// to k together
#include <bits/stdc++.h>
using namespace std;



 // } Driver Code Ends


class Solution
{
public:
    int minSwap(int arr[], int n, int k) {
        // Complet the function
        int count=0,total=0;
        for(int i=0;i<n;i++) if(arr[i]<=k) total++;
        for(int i=0;i<total;i++) if(arr[i]>k) count++;
        int i=0,j=total,mi=count;
        while(j<n)
        {
            if(arr[i]>k) count--;
            if(arr[j]>k) count++;
            mi=min(mi,count);
            i++,j++;
        }
        return mi;
    }
};


// { Driver Code Starts.

// Driver code
int main() {

	int t,n,k;
	cin>>t;
	while(t--)
    {
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        cin>>k;
        Solution ob;
        cout << ob.minSwap(arr, n, k) << "\n";
    }
	return 0;
}
  // } Driver Code Ends
