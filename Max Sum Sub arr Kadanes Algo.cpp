
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








public class Main {
  public static void main(String[] args) {
    try {
      throw new RuntimeException("Unchecked Exception");
    } catch (RuntimeException e) {
      System.out.println("Caught Exception: " + e.getMessage());
    }
  }
}


public class Main {
  public static void main(String[] args) {
    try {
      throwException();
    } catch (RuntimeException e) {
      System.out.println("Caught Exception: " + e.getMessage());
    }
  }

  public static void throwException() throws RuntimeException {
    throw new RuntimeException("Unchecked Exception");
  }
}




public class Main {
  public static void main(String[] args) {
    throwException();
  }

  public static void throwException() {
    throw new RuntimeException("Unchecked Exception");
  }
}






Assistance for User Request.


Lalita Verma
H

Hello! How can I assist you today?




Lalita Verma
Findout which part of Java API is based on Adapter pattern. Document your findings.

In Java API, the Adapter pattern is used in various places to adapt between different interfaces or classes. Here are some examples:

java.awt.event.* package: This package contains a set of event classes and listener interfaces for various user interface events such as mouse clicks, key presses, etc. To handle these events, we can implement the listener interfaces. However, sometimes we may only be interested in handling a subset of events, in which case we can use adapters that provide default implementations for all the methods in the listener interface, but only require us to implement the ones we are interested in. For example, the MouseAdapter class provides default implementations for all the methods in the MouseListener interface, but only requires us to implement the ones we need.

javax.swing.event.* package: This package also contains a set of event classes and listener interfaces for various user interface events specific to Swing components. The same concept of using adapter classes is used here as well. For example, the KeyAdapter class provides default implementations for all the methods in the KeyListener interface, but only requires us to implement the ones we need.

java.util.TimerTask class: The TimerTask class is used to schedule tasks to be executed at specific times. To use it, we need to subclass TimerTask and implement the run() method, which contains the code to be executed. However, sometimes we may only need to schedule a task without doing anything else in the TimerTask subclass. In this case, we can use an anonymous inner class that extends TimerTask and provides an implementation of the run() method, effectively acting as an adapter.

java.io.InputStreamReader and java.io.OutputStreamWriter classes: These classes are used to convert between character streams and byte streams. They provide an adapter between the character-oriented and byte-oriented I/O APIs. The InputStreamReader reads bytes from an InputStream and decodes them into characters, while the OutputStreamWriter writes characters to an OutputStream and encodes them into bytes.

In summary, the Adapter pattern is used in various parts of Java API to adapt between different interfaces or classes. The examples I provided include the event listener interfaces in java.awt.event and javax.swing.event packages, the TimerTask class, and the InputStreamReader and OutputStreamWriter classes.








The SOLID principles are a set of principles for writing maintainable and scalable software. The principles are widely used in many software development practices, including the Java API. In this answer, I will provide examples of how each of the SOLID principles is used in the Java API.

Single Responsibility Principle (SRP): The SRP states that a class should have only one reason to change. In the Java API, many classes have a single responsibility. For example, the java.lang.String class has a single responsibility of representing a sequence of characters. Another example is the java.util.ArrayList class, which has a single responsibility of representing a list of objects.

Open/Closed Principle (OCP): The OCP states that a class should be open for extension but closed for modification. In the Java API, many classes are designed to be extended without modifying their source code. For example, the java.util.AbstractList class is designed to be extended by providing implementations for the abstract methods in the class. Another example is the java.util.TimerTask class, which is designed to be extended to create custom timer tasks.

Liskov Substitution Principle (LSP): The LSP states that subclasses should be substitutable for their base classes. In the Java API, many classes are designed to be extended and substituted. For example, the java.util.List interface is implemented by many classes such as java.util.ArrayList and java.util.LinkedList, which can be substituted for each other.

Interface Segregation Principle (ISP): The ISP states that clients should not be forced to depend on methods they do not use. In the Java API, many interfaces are designed with a minimal set of methods required for their specific functionality. For example, the java.util.List interface has a minimal set of methods required for accessing and modifying a list of elements.

Dependency Inversion Principle (DIP): The DIP states that high-level modules should not depend on low-level modules; both should depend on abstractions. In the Java API, many classes and interfaces depend on abstractions rather than concrete implementations. For example, the java.util.Collections class provides a set of methods that operate on any collection that implements the java.util.Collection interface.















public interface LoanProductInterface {
    public String getName();
    public double getInterestRate();
    public int getMinCreditScore();
    public double getMaxLoanAmount();
}

public class LoanProduct implements LoanProductInterface {
    private String name;
    private double interestRate;
    private int minCreditScore;
    private double maxLoanAmount;
    
    public LoanProduct() {
    }
    
    public LoanProduct(String name, double interestRate, int minCreditScore, double maxLoanAmount) {
        this.name = name;
        this.interestRate = interestRate;
        this.minCreditScore = minCreditScore;
        this.maxLoanAmount = maxLoanAmount;
    }
    
    public String getName() {
        return name;
    }
    
    public void setName(String name) {
        this.name = name;
    }
    
    public double getInterestRate() {
        return interestRate;
    }
    
    public void setInterestRate(double interestRate) {
        this.interestRate = interestRate;
    }
    
    public int getMinCreditScore() {
        return minCreditScore;
    }
    
    public void setMinCreditScore(int minCreditScore) {
        this.minCreditScore = minCreditScore;
    }
    
    public double getMaxLoanAmount() {
        return maxLoanAmount;
    }
    
    public void setMaxLoanAmount(double maxLoanAmount) {
        this.maxLoanAmount = maxLoanAmount;
    }
}

public class Bank {
    private LoanProductInterface[] loanProducts = new LoanProductInterface[10];
    private int nextIndex = 0;
    
    public void addLoanProduct(String name, double interestRate, int minCreditScore, double maxLoanAmount) {
        if (nextIndex < loanProducts.length) {
            loanProducts[nextIndex] = new LoanProduct(name, interestRate, minCreditScore, maxLoanAmount);
            nextIndex++;
        }
    }
    
    // other methods...
}


