
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






import java.io.IOException;

public class ExceptionHandlingExample {
  public static void main(String[] args) {
    try {
      divideByZero();
    } catch (ArithmeticException ex) {
      System.out.println("Caught ArithmeticException in main method.");
    } catch (Exception ex) {
      System.out.println("Caught Exception in main method.");
    } finally {
      System.out.println("Finally block in main method.");
    }

    tryWithMultipleCatches();
    tryWithFinally();
    tryWithNestedTry();
  }

  public static void divideByZero() throws ArithmeticException {
    int x = 10, y = 0;
    int result = x / y;
    System.out.println("Result: " + result);
  }

  public static void tryWithMultipleCatches() {
    try {
      int[] arr = new int[5];
      arr[10] = 100;
    } catch (ArithmeticException ex) {
      System.out.println("Caught ArithmeticException in tryWithMultipleCatches.");
    } catch (ArrayIndexOutOfBoundsException ex) {
      System.out.println("Caught ArrayIndexOutOfBoundsException in tryWithMultipleCatches.");
    } finally {
      System.out.println("Finally block in tryWithMultipleCatches.");
    }
  }

  public static void tryWithFinally() {
    try {
      throw new IOException();
    } catch (IOException ex) {
      System.out.println("Caught IOException in tryWithFinally.");
    } finally {
      System.out.println("Finally block in tryWithFinally.");
    }
  }

  public static void tryWithNestedTry() {
    try {
      try {
        throw new NullPointerException();
      } catch (NullPointerException ex) {
        System.out.println("Caught NullPointerException in nested try block.");
        throw ex;
      }
    } catch (NullPointerException ex) {
      System.out.println("Caught NullPointerException in outer try block.");
    } finally {
      System.out.println("Finally block in tryWithNestedTry.");
    }
  }
}
