
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
	<title>Choose a page</title>
</head>
<body>
	<h1>Choose a page</h1>
	<form action="PageController" method="get">
		<label for="page">Enter a number:</label>
		<input type="number" id="page" name="page" required>
		<br><br>
		<input type="submit" value="Submit">
	</form>
</body>
</html>


import java.io.IOException;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class PageController extends HttpServlet {
	private static final long serialVersionUID = 1L;
       
    public PageController() {
        super();
    }

	protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		String page = request.getParameter("page");
		
		if (page.equals("1")) {
			request.getRequestDispatcher("AboutUs.jsp").forward(request, response);
		} else if (page.equals("2")) {
			request.getRequestDispatcher("ContactUs.jsp").forward(request, response);
		} else {
			request.getRequestDispatcher("error.jsp").forward(request, response);
		}
	}

	protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
		doGet(request, response);
	}
}



<!DOCTYPE html>
<html>
<head>
	<title>About Us</title>
</head>
<body>
	<h1>About Us</h1>
	<p>We are a company that specializes in making things.</p>
</body>
</html>






<!DOCTYPE html>
<html>
<head>
	<title>Contact Us</title>
</head>
<body>
	<h1>Contact Us</h1>
	<p>You can contact us at 555-1234 or email us at contact@company.com.</p>
</body>
</html>





<!DOCTYPE html>
<html>
<head>
	<title>Error</title>
</head>
<body>
	<h1>Error</h1>
	<p>The page you requested does not exist.</p>
</body>
</html>






