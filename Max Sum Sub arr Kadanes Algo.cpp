
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






<!DOCTYPE html>
<html>
  <head>
    <title>Name Validation</title>
  </head>
  <body>
    <form>
      <label for="firstName">First Name:</label>
      <input type="text" id="firstName" name="firstName" oninput="validateName()" required>

      <label for="lastName">Last Name:</label>
      <input type="text" id="lastName" name="lastName" oninput="validateName()" required>

      <p id="validationResult"></p>
    </form>

    <script>
      function validateName() {
        const firstName = document.getElementById("firstName").value;
        const lastName = document.getElementById("lastName").value;
        const regex = /^[a-zA-Z]{3,}$/; // Matches 3 or more alphabets only

        if (regex.test(firstName) && regex.test(lastName)) {
          document.getElementById("validationResult").textContent = "Valid names";
        } else {
          document.getElementById("validationResult").textContent = "Invalid names";
        }
      }
    </script>
  </body>
</html>










