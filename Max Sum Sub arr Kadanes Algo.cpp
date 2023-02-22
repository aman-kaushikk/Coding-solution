
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




import java.io.File;
import java.io.FileNotFoundException;
import java.io.PrintWriter;
import java.util.Scanner;

public class DataInOut {

    public static void main(String[] args) {
        try {
            // Create a new PrintWriter instance to write to a file named "data.txt"
            PrintWriter writer = new PrintWriter(new File("data.txt"));

            // Read data from the console in different data types and write it to the file
            Scanner console = new Scanner(System.in);

            System.out.print("Enter an integer: ");
            int num = console.nextInt();
            writer.println(num);

            System.out.print("Enter a double: ");
            double d = console.nextDouble();
            writer.println(d);

            System.out.print("Enter a string: ");
            String str = console.next();
            writer.println(str);

            // Close the PrintWriter
            writer.close();

            // Read data from the file using Scanner
            Scanner fileScanner = new Scanner(new File("data.txt"));

            int numFromFile = fileScanner.nextInt();
            double dFromFile = fileScanner.nextDouble();
            String strFromFile = fileScanner.next();

            // Print the data that was read from the file
            System.out.println("Data from file:");
            System.out.println("Integer: " + numFromFile);
            System.out.println("Double: " + dFromFile);
            System.out.println("String: " + strFromFile);

            // Close the Scanner
            fileScanner.close();
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}




