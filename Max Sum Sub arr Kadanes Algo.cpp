
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









import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class LoginServlet extends HttpServlet {
  
  // This method handles HTTP GET requests
  public void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    
    // Get the current session, or create a new one if none exists
    HttpSession session = request.getSession(true);
    
    // Get the action parameter from the request
    String action = request.getParameter("action");
    
    // If the action is "login"
    if (action != null && action.equals("login")) {
      
      // Get the username and password parameters from the request
      String username = request.getParameter("username");
      String password = request.getParameter("password");
      
      // Check if the username and password are valid (in this example, we'll use a hardcoded username and password)
      if (username.equals("exampleuser") && password.equals("password123")) {
        
        // If the credentials are valid, set the session attribute to indicate that the user is logged in
        session.setAttribute("loggedIn", true);
        
        // Check if the "keep me signed in" checkbox was checked
        boolean keepSignedIn = request.getParameter("keepSignedIn") != null;
        
        // If the "keep me signed in" checkbox was checked, create a cookie with the username and set its max age to 30 days
        if (keepSignedIn) {
          Cookie usernameCookie = new Cookie("username", username);
          usernameCookie.setMaxAge(30 * 24 * 60 * 60); // 30 days
          response.addCookie(usernameCookie);
        }
        
        // Redirect the user to the home page
        response.sendRedirect("home.jsp");
        
      } else {
        
        // If the credentials are invalid, display an error message and show the login form again
        request.setAttribute("errorMessage", "Invalid username or password.");
        RequestDispatcher rd = request.getRequestDispatcher("login.jsp");
        rd.forward(request, response);
        
      }
      
    }
    
    // If the action is "logout"
    else if (action != null && action.equals("logout")) {
      
      // Invalidate the session to log the user out
      session.invalidate();
      
      // Remove the username cookie, if it exists
      Cookie[] cookies = request.getCookies();
      if (cookies != null) {
        for (Cookie cookie : cookies) {
          if (cookie.getName().equals("username")) {
            cookie.setMaxAge(0);
            response.addCookie(cookie);
          }
        }
      }
      
      // Redirect the user to the login page
      response.sendRedirect("login.jsp");
      
    }
    
    // If there is no action parameter, show the login form
    else {
      
      // Check if the user has a username cookie
      String username = null;
      Cookie[] cookies = request.getCookies();
      if (cookies != null) {
        for (Cookie cookie : cookies) {
          if (cookie.getName().equals("username")) {
            username = cookie.getValue();
            break;
          }
        }
      }
      
      // If the user has a username cookie, automatically log them in
      if (username != null) {
        session.setAttribute("loggedIn", true);
        response.sendRedirect("home.jsp");
      }
      
      // If the user does not have a username cookie, show the login form
      else {
        RequestDispatcher rd = request.getRequestDispatcher("login.jsp");
        rd.forward(request, response);
      }
      
    }
    
  }
  
}










import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class CookieDisplayServlet extends HttpServlet {
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // Set the response content type
        response.setContentType("text/html");
        
        PrintWriter out = response.getWriter();
        Cookie[] cookies = request.getCookies();
        
        // Display cookies in a table
        if (cookies != null && cookies.length > 0) {
            out.println("<html><body>");
            out.println("<h2> Cookies </h2>");
            out.println("<table border='1'>");
            out.println("<tr><th>Name</th><th>Value</th></tr>");
            for (Cookie cookie : cookies) {
                out.println("<tr><td>" + cookie.getName() + "</td><td>" + cookie.getValue() + "</td></tr>");
            }
            out.println("</table></body></html>");
        } else { // Display "No Cookie" message if there are no cookies
            out.println("<html><body>");
            out.println("<h2> No Cookie </h2>");
            out.println("</body></html>");
        }
    }
}











import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class CookieDisplayServlet extends HttpServlet {
    public void doGet(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
        // Set the response content type
        response.setContentType("text/html");
        
        PrintWriter out = response.getWriter();
        Cookie[] cookies = request.getCookies();
        
        // Display cookies in a table if cookies are enabled
        if (cookies != null && cookies.length > 0) {
            out.println("<html><body>");
            out.println("<h2> Cookies </h2>");
            out.println("<table border='1'>");
            out.println("<tr><th>Name</th><th>Value</th></tr>");
            for (Cookie cookie : cookies) {
                out.println("<tr><td>" + cookie.getName() + "</td><td>" + cookie.getValue() + "</td></tr>");
            }
            out.println("</table></body></html>");
        } else { // Display "No Cookie" message and recreate the cookies as URL parameters
            out.println("<html><body>");
            out.println("<h2> No Cookie </h2>");
            out.println("</body></html>");
            
            // Recreate the cookies as URL parameters
            String name1 = "cookie1";
            String value1 = "value1";
            String name2 = "cookie2";
            String value2 = "value2";
            
            String urlWithParams = response.encodeURL(request.getContextPath() + "/display?name1=" + value1 + "&name2=" + value2);
            out.println("<p>Please click <a href=\"" + urlWithParams + "\">here</a> to view the cookies</p>");
        }
    }
}

