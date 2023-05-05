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
  // } Driver 







Java Serialization Data Types.


User
What type of data saves during creating serialization in java

ChatGPT
Serialization in Java is the process of converting an object into a stream of bytes so that the object can be stored in a file or transmitted over a network. During serialization in Java, the following types of data are saved:

Object state: The state of the object, which includes the values of all the instance variables, is saved during serialization.

Class information: Information about the class of the object is also saved during serialization. This information includes the name of the class, its superclass, and any interfaces it implements.

Object identity: Serialization preserves the identity of the object, so that when the object is deserialized, it is the same object with the same identity.

Object graph: If the object being serialized contains references to other objects, the entire object graph is saved during serialization. This means that all the objects that are reachable from the serialized object will also be serialized.

Type information: Serialization in Java also saves the type information of the object, which includes the type of each instance variable, the class of the object, and any type parameters that the object may have.

Overall, serialization in Java saves a complete representation of the object and all the related data, including the object's state, identity, class information, and type information.





User
Process of converting serialization

ChatGPT
The process of converting an object into a stream of bytes is known as serialization. In Java, the process of serialization is performed using the java.io.Serializable interface and the ObjectOutputStream class.

Here are the basic steps involved in the serialization process:

Create an instance of the ObjectOutputStream class: To serialize an object, you first need to create an instance of the ObjectOutputStream class. This class provides methods for writing objects to a stream.

Implement the Serializable interface: The class whose object you want to serialize must implement the Serializable interface. This interface is a marker interface that does not contain any methods.

Write the object to the stream: Once you have created an instance of the ObjectOutputStream class, you can write the object to the stream using the writeObject() method.

Close the stream: After you have written the object to the stream, you need to close the stream using the close() method.

Here's an example code snippet that demonstrates how to serialize an object:

java
Copy code
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
In this example, we have created an instance of the ObjectOutputStream class and passed a FileOutputStream to its constructor to create a file to which we want to write the serialized object. We then create an object of the Employee class and write it to the stream using the writeObject() method. Finally, we close the stream using the close() method.





User
What type of data saved in file during serialiazation

ChatGPT
During serialization in Java, the data that is saved in the file includes a binary representation of the object and all its related data, which includes the object's state, identity, class information, and type information.

The binary representation of the object is typically saved in a file with an extension of .ser or .dat. The exact format of the binary data depends on the serialization mechanism used.

When an object is serialized in Java, the following types of data are saved in the file:

Object metadata: This includes the version of the serialization protocol being used, the class descriptor of the object, and any annotations associated with the object.

Object state: This includes the values of all the non-transient instance variables of the object.

Class metadata: This includes information about the class of the object, such as the class name, the superclass, and any interfaces it implements.

Type information: This includes information about the types of the object's instance variables and any type parameters associated with the object.

Object references: If the object being serialized contains references to other objects, those objects are also serialized, and their references are included in the serialized data.

Overall, during serialization, the entire object graph is saved in the file, including the object being serialized and all the related objects that are reachable from the serialized object. When the object is deserialized, the entire object graph is reconstructed from the serialized data.





import java.io.*;
import java.sql.*;

public class ResultSetToHtmlTable {
   public static void main(String[] args) {
      String url = "jdbc:mysql://localhost:3306/mydatabase";
      String username = "root";
      String password = "password";
      String query = "SELECT * FROM mytable";

      try {
         // Connect to database
         Connection conn = DriverManager.getConnection(url, username, password);

         // Execute query
         Statement stmt = conn.createStatement();
         ResultSet rs = stmt.executeQuery(query);

         // Create PrintWriter to write HTML output
         PrintWriter out = new PrintWriter("output.html");

         // Start HTML table
         out.println("<table>");
         
         // Add table headers
         ResultSetMetaData rsmd = rs.getMetaData();
         int columnCount = rsmd.getColumnCount();
         out.println("<tr>");
         for (int i = 1; i <= columnCount; i++) {
            out.println("<th>" + rsmd.getColumnName(i) + "</th>");
         }
         out.println("</tr>");
         
         // Add table data
         while (rs.next()) {
            out.println("<tr>");
            for (int i = 1; i <= columnCount; i++) {
               out.println("<td>" + rs.getString(i) + "</td>");
            }
            out.println("</tr>");
         }
         
         // End HTML table
         out.println("</table>");

         // Close resources
         rs.close();
         stmt.close();
         conn.close();
         out.close();

         System.out.println("HTML table created successfully!");

      } catch (SQLException | IOException e) {
         e.printStackTrace();
      }
   }
}
