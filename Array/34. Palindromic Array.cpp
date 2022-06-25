// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;


 // } Driver Code Ends
/*Complete the function below*/

class Solution {
public:
    int PalinArray(int a[], int n)
    {
    	// code here
    	int count=0;
    	for(int i=0;i<n;i++)
    	{
    	    int rev=0,rem;
    	    int k=a[i];
    	    while(k>0)
    	    {
    	        rem=k%10;
    	        rev=rev*10+rem;
    	        k=k/10;
    	    }
    	    if(a[i]!=rev) count=1;
    	}
    	if(count==1) return(0);
    	else return(1);
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
}  // } Driver Code Ends
