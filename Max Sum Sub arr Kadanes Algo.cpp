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





<!DOCTYPE html>
<html>
<head>
	<title>Table with Pagination</title>
	<style>
		table {
			border-collapse: collapse;
			width: 100%;
		}
		th, td {
			text-align: left;
			padding: 8px;
			border-bottom: 1px solid #ddd;
		}
		tr:nth-child(even) {
			background-color: #f2f2f2;
		}
		.pagination {
			display: inline-block;
			padding: 8px 16px;
			margin: 8px;
			border: 1px solid #ddd;
			border-radius: 5px;
		}
		.active {
			background-color: #4CAF50;
			color: white;
			border-radius: 5px;
		}
		.disabled {
			background-color: #ddd;
			color: #999;
			border-radius: 5px;
		}
	</style>
</head>
<body>
	<table id="myTable">
		<thead>
			<tr>
				<th>ID</th>
				<th>Name</th>
				<th>Age</th>
				<th>Email</th>
			</tr>
		</thead>
		<tbody>
			<tr>
				<td>1</td>
				<td>John Doe</td>
				<td>25</td>
				<td>john.doe@example.com</td>
			</tr>
			<tr>
				<td>2</td>
				<td>Jane Smith</td>
				 <td>30</td>
				<td>jane.smith@example.com</td>
			</tr>
			<!-- more table data here -->
		</tbody>
	</table>
	<div id="pagination"></div>
	<script>
		var table = document.getElementById("myTable");
		var rows = table.rows.length - 1; // subtract 1 to exclude the header row
		var rowsPerPage = 10;
		var totalPages = Math.ceil(rows / rowsPerPage);
		var currentPage = 1;

		// hide all rows except the first 10
		for (var i = rowsPerPage; i < rows; i++) {
			table.rows[i].style.display = "none";
		}

		// create pagination links
		for (var i = 1; i <= totalPages; i++) {
			var link = document.createElement("a");
			link.setAttribute("href", "#");
			link.setAttribute("class", "pagination");
			link.innerHTML = i;

			link.onclick = function() {
				var page = this.innerHTML;
				var startIndex = (page - 1) * rowsPerPage;
				var endIndex = startIndex + rowsPerPage;

				for (var i = 0; i < rows; i++) {
					if (i >= startIndex && i < endIndex) {
						table.rows[i + 1].style.display = "";
					} else {
						table.rows[i + 1].style.display = "none";
					}
				}

				currentPage = page;
				updatePaginationLinks();
				return false;
			};

			document.getElementById("pagination").appendChild(link);
		}

		// highlight the current page link
		function updatePaginationLinks() {
			var links = document.getElementsByClassName("pagination");
			for (var i = 0; i < links.length; i++) {
				links[i

