
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(int arr[], int n){
        
        // Your code here
        long long max_sum =LONG_MIN , cur_sum=0;
        for(int i=0; i<n;i++)
        {
            cur_sum = cur_sum + arr[i];
            if(cur_sum>max_sum)
                max_sum=cur_sum;
            if(cur_sum<0)
                cur_sum=0;
        }
        return max_sum;
        
    }
};

// { Driver Code Starts.

int main()
{
    int t,n;
    
    cin>>t; //input testcases
    while(t--) //while testcases exist
    {

public class ReverseString {
    public static void main(String[] args) {
        String originalString = "Hello World";

        // Using StringBuffer class
        String reversedString = new StringBuffer(originalString).reverse().toString();
        System.out.println("Reversed String (StringBuffer): " + reversedString);

        // Using StringBuilder class
        reversedString = new StringBuilder(originalString).reverse().toString();
        System.out.println("Reversed String (StringBuilder): " + reversedString);

        // Using Recursion
        reversedString = reverseStringRecursion(originalString);
        System.out.println("Reversed String (Recursion): " + reversedString);
    }

    public static String reverseStringRecursion(String originalString) {
        if (originalString.isEmpty()) {
            return originalString;
        }
        return reverseStringRecursion(originalString.substring(1)) + originalString.charAt(0);
    }
}


        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code Ends
