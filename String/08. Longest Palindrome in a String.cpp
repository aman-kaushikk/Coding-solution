// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        // code here
        string ans="";
        for(int i=0;i<S.length();i++)
        {
            int start=i-1,end=i+1;
            while(start>=0 and end<=S.length()-1)
            {
                if(S[start]==S[end])
                {
                    start--;
                    end++;
                }
                else break;
            }
            
            int k=end-start-1;
            if(k>ans.length()) ans = S.substr(start+1,k);
            
            start=i-1,end=i;
            while(start>=0 and end<=S.length()-1)
            {
                if(S[start]==S[end])
                {
                    start--;
                    end++;
                }
                else break;
            }
            
            int l=end-start-1;
            if(l>ans.length()) ans =S.substr(start+1,l);
        }
        return(ans);
    }
};

// { Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends
