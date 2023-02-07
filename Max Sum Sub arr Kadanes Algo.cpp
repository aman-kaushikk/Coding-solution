
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




import java.time.LocalDate;
import java.util.ArrayList;

public class Bank {
  private ArrayList<Customer> customers;
  
  public Bank() {
    this.customers = new ArrayList<>();
  }
  
  public boolean registerCustomer(Customer customer) {
    for (Customer c : customers) {
      if (c.getCustomerld() == customer.getCustomerld()) {
        return false;
      }
    }
    customers.add(customer);
    return true;
  }
  
  public Customer findCustomer(int customerld) {
    for (Customer c : customers) {
      if (c.getCustomerld() == customerld) {
        return c;
      }
    }
    return null;
  }
  
  public void printAllCustomers() {
    for (Customer c : customers) {
      System.out.println(c.toString());
    }
  }
  
  public boolean deleteCustomer(int customerld) {
    for (Customer c : customers) {
      if (c.getCustomerld() == customerld) {
        customers.remove(c);
        return true;
      }
    }
    return false;
  }
}

public class Customer {
  private int customerld;
  private String customerName;
  private String contactNumber;
  private String emailAddress;
  private double monthlyIncome;
  private String profession;
  private double totalMonthlyExpenses;
  private double maxEligibleLoanAmount;
  private String designation;
  private String companyName;
  private LocalDate dateOfBirth;
  
  public Customer(int customerld, String customerName, String contactNumber, String emailAddress, 
                  double monthlyIncome, String profession, double totalMonthlyExpenses,
                  String designation, String companyName, LocalDate dateOfBirth) {
    this.customerld = customerld;
    this.customerName = customerName;
    this.contactNumber = contactNumber;
    this.emailAddress = emailAddress;
    this.monthlyIncome = monthlyIncome;
    this.profession = profession;
    this.totalMonthlyExpenses = totalMonthlyExpenses;
    this.designation = designation;
    this.companyName = companyName;
    this.dateOfBirth = dateOfBirth;
  }
  
  public int getCustomerld() {
    return customerld;
  }
  
  public String getCustomerName() {
    return customerName;
  }
  
  public String getContactNumber() {
    return contactNumber;
  }
  
  public String getEmailAddress() {
    return emailAddress;
  }
  
  public double getMonthlyIncome() {
    return monthlyIncome;
  }
  
  public String getProfession() {
    return profession;
  }
  
  public double getTotalMonthlyExpenses() {
    return totalMonthlyExpenses;
  }
  
  public double getMaxEligibleLoanAmount() {
    return maxEligibleLoanAmount;
  }
  
  public String getDesignation() {


