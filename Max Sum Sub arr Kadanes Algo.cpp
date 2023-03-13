
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









<%!
    public int sum(int a, int b) {
        return a + b;
    }
%>

<html>
<head>
    <title>Sum of Two Numbers</title>
</head>
<body>
    <%
        int num1 = 3;
        int num2 = 4;
        int result = sum(num1, num2);
    %>
    <p>Sum of <%= num1 %> and <%= num2 %> is <%= result %>.</p>
    <% System.out.println("Sum of " + num1 + " and " + num2 + " is " + result + "."); %>
</body>
</html>






<html>
<head>
    <title>Current Date and Time</title>
</head>
<body>
    <p>The current date and time is: <%= new java.util.Date() %></p>
</body>
</html>






<html>
<head>
    <title>Factorials</title>
</head>
<body>
    <h1>Factorials</h1>
    
    <%-- Get the value of n from the request parameters --%>
    <% int n = Integer.parseInt(request.getParameter("n")); %>
    
    <%-- Calculate the factorials of the numbers from 1 to n --%>
    <% long[] factorials = new long[n]; %>
    <% long factorial = 1; %>
    <% for (int i = 0; i < n; i++) { %>
        <% factorial *= (i + 1); %>
        <% factorials[i] = factorial; %>
    <% } %>
    
    <%-- Print the table of numbers and their factorials --%>
    <table border="1">
        <tr>
            <th>Number</th>
            <th>Factorial</th>
        </tr>
        <% for (int i = 0; i < n; i++) { %>
            <tr>
                <td><%= i + 1 %></td>
                <td><%= factorials[i] %></td>
            </tr>
        <% } %>
    </table>
</body>
</html>






<html>
<head>
    <title>Movie Ticket Price</title>
</head>
<body>
    <h1>Movie Ticket Price</h1>
    
    <%-- Get the user's name and age from the request parameters --%>
    <% String name = request.getParameter("name"); %>
    <% int age = Integer.parseInt(request.getParameter("age")); %>
    
    <%-- Determine the ticket price based on the age --%>
    <% double price; %>
    <% if (age > 62) { %>
        <% price = 7.00; %>
    <% } else if (age < 10) { %>
        <% price = 5.00; %>
    <% } else { %>
        <% price = 9.50; %>
    <% } %>
    
    <%-- Print the name, age, and ticket price --%>
    <p>Hello <%= name %>, your age is <%= age %>.</p>
    <p>The ticket price is $<%= price %>.</p>
</body>
</html>













