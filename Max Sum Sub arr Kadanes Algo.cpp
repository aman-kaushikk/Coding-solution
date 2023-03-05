
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
	<title>Product Table</title>
	<style>
		table {
			border-collapse: collapse;
			width: 100%;
		}
		th, td {
			text-align: left;
			padding: 8px;
			border: 1px solid black;
		}
		th {
			background-color: #333;
			color: white;
		}
		button {
			padding: 5px;
			margin-right: 5px;
		}
	</style>
</head>
<body>
	<form>
		<table>
			<tr>
				<th>Product Code</th>
				<th>Search:</th>
				<td><input type="text" id="search" name="search"></td>
				<th>Reviewed By</th>
				<td><input type="text" id="reviewed_by" name="reviewed_by"></td>
				<th>Product Name</th>
				<td><input type="text" id="product_name" name="product_name"></td>
				<th>Product Description</th>
				<td><input type="text" id="product_description" name="product_description"></td>
				<th>Product Type</th>
				<td><input type="text" id="product_type" name="product_type"></td>
				<th>Created By</th>
				<td><input type="text" id="created_by" name="created_by"></td>
				<th>Status</th>
				<td><input type="text" id="status" name="status"></td>
				<th>Actions:</th>
				<td>
					<button>Edit</button>
					<button>Delete</button>
				</td>
			</tr>
			<tr>
				<td colspan="16" style="text-align: right;">
					Showing 1 to 1 of 1 entries
					<button>Previous</button>
					<button>1</button>
					<button>Next</button>
				</td>
			</tr>
		</table>
	</form>
</body>
</html>
