88
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





String username = "john_doe";
String password = "password123";
String hql = "INSERT INTO User (username, password) VALUES (:username, :password)";
Query query = session.createQuery(hql);
query.setParameter("username", username);
query.setParameter("password", password);
int result = query.executeUpdate();





import java.io.*;

public class SerializeObject {
    public static void main(String[] args) throws IOException {
        // Create an instance of the ObjectOutputStream class
        ObjectOutputStream out = new ObjectOutputStream(new FileOutputStream("data.obj"));

        // Create an object of the Employee class
        Employee emp = new Employee("John Doe", 35, "12345");

        // Write the object to the stream
        out.writeObject(emp);

        // Close the stream
        out.close();
    }
}
