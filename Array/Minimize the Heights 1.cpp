#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        sort(arr,arr+n);
        int diff;
        diff=arr[n-1]-arr[0];
        int minimum,maximum;
        for(int i=1;i<n;i++)
        {
            minimum=min(arr[0]+k , arr[i]-k);
            maximum=max(arr[n-1]-k , arr[i-1]+k);
            diff=min(diff , maximum-minimum);
        }
        return diff;
    }
    
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}  // } Driver Code Ends
