// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:    
       vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            
           /* unordered_map<int ,int> MA;  //this code snip having space complaxity
            unordered_map<int ,int> MB;
            unordered_map<int ,int> MC;
            for(int i=0;i<n1;i++) MA[A[i]]++;
            for(int i=0;i<n2;i++) MB[B[i]]++;
            for(int i=0;i<n3;i++) MC[C[i]]++;
            vector<int> t;
            for(int j=0;j<max(max(n1,n2),n3);j++)
            {
                if(MA[A[j]] and MB[B[j]] and MC[C[j]]){
                    t.push_back(A[j]);
                    MA[A[j]]=0;
                }
                
            }
            return t;
            */
            
            int i=0,j=0,k=0,z,x,c;
            vector<int> s;
            while(i<n1 and j<n2 and k<n3)
            {
                if(A[i]==B[j] and B[j]==C[k]){
                    s.push_back(A[i]);
                    i++;j++;k++;
                }
                else if(A[i]<B[j]) i++;
                else if(B[j]<C[k]) j++;
                else k++;
                z=i-1;x=j-1;c=k-1;       //to get previous element
                while(A[i]==A[z]) i++;   //compare so that repeated element will be skipped
                while(B[j]==B[x]) j++;
                while(C[k]==C[c]) k++;
            }
            
            return s;
        }

};

// { Driver Code Starts.

int main ()
{
    int t; cin >> t;
    while (t--)
    {
        int n1, n2, n3; 
        cin >> n1 >> n2 >> n3;
        int A[n1];
        int B[n2];
        int C[n3];
        
        for (int i = 0; i < n1; i++) cin >> A[i];
        for (int i = 0; i < n2; i++) cin >> B[i];
        for (int i = 0; i < n3; i++) cin >> C[i];
        
        Solution ob;
        
        vector <int> res = ob.commonElements (A, B, C, n1, n2, n3);
        if (res.size () == 0) 
            cout << -1;
        for (int i = 0; i < res.size (); i++) 
            cout << res[i] << " "; 
        cout << endl;
    }
}  // } Driver Code Ends
