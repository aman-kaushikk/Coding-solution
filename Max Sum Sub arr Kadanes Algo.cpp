
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
	<title>Product List</title>
	<style>
		table {
			border-collapse: collapse;
			width: 100%;
			margin-top: 20px;
			margin-bottom: 20px;
		}
		th, td {
			text-align: left;
			padding: 8px;
			border-bottom: 1px solid #ddd;
		}
		th {
			background-color: #f2f2f2;
		}
		input[type="text"], select {
			padding: 5px;
			border: 1px solid #CCC;
			border-radius: 4px;
			box-sizing: border-box;
			width: 100%;
			font-size: 16px;
			margin-bottom: 10px;
		}
		input[type="submit"] {
			background-color: #4CAF50;
			color: white;
			padding: 10px 20px;
			border: none;
			border-radius: 4px;
			cursor: pointer;
			font-size: 16px;
			margin-top: 20px;
		}
		.pagination {
			display: flex;
			flex-wrap: wrap;
			align-items: center;
			justify-content: center;
			margin-top: 20px;
		}
		.page-link {
			background-color: #f2f2f2;
			color: #333;
			border: 1px solid #ccc;
			padding: 8px 16px;
			margin: 0 4px;
			cursor: pointer;
		}
		.active {
			background-color: #4CAF50;
			color: white;
			border: none;
		}
	</style>
</head>
<body>
	<h1>Product List</h1>
	<form>
		<label for="show_entries">Show:</label>
		<select id="show_entries" name="show_entries">
			<option value="10">10</option>
			<option value="25">25</option>
			<option value="50">50</option>
			<option value="100">100</option>
		</select>
		<label for="search">Search:</label>
		<input type="text" id="search" name="search">
		<label for="product_type">Product Type:</label>
		<select id="product_type" name="product_type">
			<option value="">All</option>
			<option value="type1">Type 1</option>
			<option value="type2">Type 2</option>
			<option value="type3">Type 3</option>
		</select>
		<label for="created_by">Created By:</label>
		<input type="text" id="created_by" name="created_by">
		<label for="status">Status:</label>
		<select id="status" name="status">
			<option value="">All</option>
			<option value="active">Active</option>
			<option value="inactive">Inactive</option>
		</select>
		<label for="reviewed_by">Reviewed By:</label>
		<input type="text" id="reviewed_by" name="reviewed_by">
		<label for="product_name">Product Name:</label>
		<input type="text" id="product_name" name="product_name">
		<label for="product_description">Product Description:</label>
		<input type="text" id="product_description" name="product_description">
		<label for="actions


