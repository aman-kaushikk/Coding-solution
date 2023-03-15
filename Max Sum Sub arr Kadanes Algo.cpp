
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






<%@ page import="java.util.ArrayList" %>
<%@ page import="java.util.Iterator" %>
<%
	ArrayList products = (ArrayList) session.getAttribute("products");
	if (products == null) {
		products = new ArrayList();
		session.setAttribute("products", products);
	}

	String productId = request.getParameter("product-id");
	String productName = request.getParameter("product-name");
	int productPrice = Integer.parseInt(request.getParameter("product-price"));

	boolean productExists = false;
	for (Iterator i = products.iterator(); i.hasNext(); ) {
		String[] product = (String[]) i.next();
		if (product[0].equals(productId)) {
			productExists = true;
			break;
		}
	}

	if (productExists) {
		out.println("Product with ID " + productId + " already exists. Please insert another product.");
	} else {
		String[] product = {productId, productName, Integer.toString(productPrice)};
		products.add(product);
		out.println("Product added: " + productName + " (ID: " + productId + ", Price: " + productPrice + ")");
	}

	out.println("<h2>All Products:</h2>");
	out.println("<table>");
	out.println("<tr><th>ID</th><th>Name</th><th>Price</th></tr>");
	for (Iterator i = products.iterator(); i.hasNext(); ) {
		String[] product = (String[]) i.next();
		out.println("<tr><td>" + product[0] + "</td><td>" + product[1] + "</td><td>" + product[2] + "</td></tr>");
	}
	out.println("</table>");
%>




