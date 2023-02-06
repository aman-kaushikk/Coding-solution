
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

public class ReverseString {
    public static void main(String[] args) {
        String originalString = "Hello World";

        // Using StringBuffer class
        String reversedString = new StringBuffer(originalString).reverse().toString();
        System.out.println("Reversed String (StringBuffer): " + reversedString);

        // Using StringBuilder class
        reversedString = new StringBuilder(originalString).reverse().toString();
        System.out.println("Reversed String (StringBuilder): " + reversedString);

        // Using Recursion
        reversedString = reverseStringRecursion(originalString);
        System.out.println("Reversed String (Recursion): " + reversedString);
    }

    public static String reverseStringRecursion(String originalString) {
        if (originalString.isEmpty()) {
            return originalString;
        }
        return reverseStringRecursion(originalString.substring(1)) + originalString.charAt(0);
    }
}


        
        cin>>n; //input size of array
        
        int a[n];
        
        for(int i=0;i<n;i++)
            cin>>a[i]; //inputting elements of array
            
        Solution ob;
        
        cout << ob.maxSubarraySum(a, n) << endl;
    }
}
  // } Driver Code End



import java.text.DecimalFormat;

public class LoanRepayment {
    public static void main(String[] args) {
        double loanAmount = 10000;
        double interestRate = 10;
        int loanTerm = 12;
        DecimalFormat decimalFormat = new DecimalFormat("#.##");

        System.out.println("Loan Repayment Schedule:");
        System.out.println("Installment No.\tOpening Balance\tInterest\tPrincipal\tClosing Balance");
        double outstandingPrincipal = loanAmount;
        for (int i = 1; i <= loanTerm; i++) {
            double interest = outstandingPrincipal * interestRate / 100 / 12;
            double principal = outstandingPrincipal * (interestRate / 100 / 12) * (Math.pow((1 + interestRate / 100 / 12), loanTerm) / (Math.pow((1 + interestRate / 100 / 12), loanTerm) - 1));
            double installment = principal + interest;
            outstandingPrincipal -= principal;
            System.out.println(i + "\t\t" + decimalFormat.format(outstandingPrincipal + principal) + "\t\t" + decimalFormat.format(interest) + "\t\t" + decimalFormat.format(principal) + "\t\t" + decimalFormat.format(outstandingPrincipal));
        }
    }
}







public class Customer {
    private static int nextCustomerId = 1;
    private int customerId;
    private String name;
    private int age;
    private String address;

    public Customer(String name, int age, String address) {
        this.customerId = nextCustomerId++;
        this.name = name;
        this.age = age;
        this.address = address;
    }

    public int getCustomerId() {
        return customerId;
    }

    public String getName() {
        return name;
    }

    public int getAge() {
        return age;
    }

    public String getAddress() {
        return address;
    }
}

public class Loan {
    private static int nextLoanAgreementId = 1;
    private int loanAgreementId;
    private Customer customer;
    private double loanAmount;
    private int loanPeriod;
    private double interestRate;

    public Loan(Customer customer, double loanAmount, int loanPeriod, double interestRate) {
        this.loanAgreementId = nextLoanAgreementId++;
        this.customer = customer;
        this.loanAmount = loanAmount;
        this.loanPeriod = loanPeriod;
        this.interestRate = interestRate;
    }

    public int getLoanAgreementId() {
        return loanAgreementId;
    }

    public Customer getCustomer() {
        return customer;
    }

    public double getLoanAmount() {
        return loanAmount;
    }

    public int getLoanPeriod() {
        return loanPeriod;
    }

    public double getInterestRate() {
        return interestRate;
    }
}

