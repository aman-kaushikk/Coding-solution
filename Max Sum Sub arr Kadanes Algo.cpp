
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







<nav>
  <ul>
    <li><a href="#">Product</a></li>
    <li class="dropdown">
      <a href="#">Policy Setup</a>
      <ul>
        <li><a href="#">Policy 1</a></li>
        <li><a href="#">Policy 2</a></li>
        <li><a href="#">Policy 3</a></li>
      </ul>
    </li>
    <li class="dropdown">
      <a href="#">Parameters</a>
      <ul>
        <li><a href="#">Parameter 1</a></li>
        <li><a href="#">Parameter 2</a></li>
        <li><a href="#">Parameter 3</a></li>
      </ul>
    </li>
    <li><a href="#">Application</a></li>
    <li><a href="#">Receipt</a></li>
    <li><a href="#">Accounting</a></li>
    <li><a href="#">Customer Service</a></li>
    <li><a href="#">Report</a></li>
  </ul>
</nav>


nav {
  background-color: lightgray;
}

nav ul {
  list-style: none;
  display: flex;
  justify-content: flex-start;
  margin: 0;
  padding: 0;
}

nav li {
  margin: 0;
}

nav a {
  display: block;
  padding: 10px 20px;
  color: black;
  text-decoration: none;
}

nav a:hover {
  background-color: darkgray;
}

nav .dropdown:hover > ul {
  display: flex;
  flex-direction: column;
}

nav .dropdown ul {
  display: none;
  position: absolute;
  top: 100%;
  left: 0;
  background-color: white;
  margin: 0;
  padding: 0;
}

nav .dropdown li {
  width: 100%;
}

nav .dropdown a {
  padding: 10px 20px;
}

nav .dropdown a:hover {
  background-color: lightgray;
}

