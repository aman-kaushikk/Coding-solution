// { Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int a[], int n, int k) {
        // code here
        sort(a,a+n);
        int diff,maximum,minimum;
        diff=a[n-1]-a[0];
        for(int i=1;i<n;i++)
        {
           
            minimum=min(a[i]-k, a[0]+k);
            maximum=max(a[n-1]-k , a[i-1]+k);
            if (minimum<0)
                continue;
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
