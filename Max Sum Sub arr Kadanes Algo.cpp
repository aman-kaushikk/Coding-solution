
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


        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code End








public class Main {
  public static void main(String[] args) {
    try {
      throw new RuntimeException("Unchecked Exception");
    } catch (RuntimeException e) {
      System.out.println("Caught Exception: " + e.getMessage());
    }
  }
}


public class Main {
  public static void main(String[] args) {
    try {
      throwException();
    } catch (RuntimeException e) {
      System.out.println("Caught Exception: " + e.getMessage());
    }
  }

  public static void throwException() throws RuntimeException {
    throw new RuntimeException("Unchecked Exception");
  }
}




public class Main {
  public static void main(String[] args) {
    throwException();
  }

  public static void throwException() {
    throw new RuntimeException("Unchecked Exception");
  }
}




