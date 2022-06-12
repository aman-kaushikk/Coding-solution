// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        vector<int> x;
        x.push_back(1);
        for(int i=2;i<=N;i++)
        {
            int carry=0,temp=0;
            for(int j=0;j<x.size();j++)
            {
                temp=x[j]*i + carry;
                x[j]=temp%10;
                carry=temp/10;
            }
            while(carry !=0)
            {
                x.push_back(carry%10);
                carry=carry/10;
            }
            
        }
        reverse(x.begin(),x.end());
        return x;
    }
    
    
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}  // } Driver Code Ends
