// { Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int lr[n], rl[n];
        long long int sum=0;
        lr[0]=arr[0];
        for(int i=1;i<n;i++)
        {
            lr[i]=max(lr[i-1],arr[i]);
        }
        rl[n-1]=arr[n-1];
        for(int i=n-2;i>=0; i--) rl[i]=max(rl[i+1],arr[i]);
        for(int j=0;j<n;j++)
        {
            sum += (min(rl[j],lr[j])-arr[j]);
        }
        return sum;
    }
};

// { Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}  // } Driver Code Ends
