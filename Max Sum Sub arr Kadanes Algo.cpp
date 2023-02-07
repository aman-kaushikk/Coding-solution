
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

public class Bank {
  private Customer[] customers;

  public Bank() {
    this.customers = new Customer[10];
  }

  public boolean registerCustomer(Customer customer) {
    for (int i = 0; i < this.customers.length; i++) {
      if (this.customers[i] == null) {
        this.customers[i] = customer;
        return true;
      }
    }
    return false;
  }

  public Customer findCustomer(int customerId) {
    for (int i = 0; i < this.customers.length; i++) {
      if (this.customers[i] != null && this.customers[i].getCustomerId() == customerId) {
        return this.customers[i];
      }
    }
    return null;
  }

  public void printAllCustomers() {
    for (int i = 0; i < this.customers.length; i++) {
      if (this.customers[i] != null) {
        System.out.println(this.customers[i].toString());
      }
    }
  }

  public boolean deleteCustomer(int customerId) {
    for (int i = 0; i < this.customers.length; i++) {
      if (this.customers[i] != null && this.customers[i].getCustomerId() == customerId) {
        this.customers[i] = null;
        return true;
      }
    }
    return false;
  }
}

public class Customer {
  private int customerId;
  private String customerName;
  private LocalDate dateOfBirth;
  private String contactNumber;
  private String emailAddress;
  private double monthlyIncome;
  private String profession;
  private double totalMonthlyExpenses;
  private double maxEligibleLoanAmount;
  private String designation;

  public Customer(int customerId, String customerName, LocalDate dateOfBirth, String contactNumber,
                  String emailAddress, double monthlyIncome, String profession, double totalMonthlyExpenses,
                  double maxEligibleLoanAmount, String designation) {
    this.customerId = customerId;
    this.customerName = customerName;
    this.dateOfBirth = dateOfBirth;
    this.contactNumber = contactNumber;
    this.emailAddress = emailAddress;
    this.monthlyIncome = monthlyIncome;
    this.profession = profession;
    this.totalMonthlyExpenses = totalMonthlyExpenses;
    this.maxEligibleLoanAmount = maxEligibleLoanAmount;
    this.designation = designation;
  }

  public int getCustomerId() {
    return customerId;
  }

  public void setCustomerId(int customerId) {
    this.customerId = customerId;
  }

  public String getCustomerName() {
    return customerName;
  }

  public void setCustomerName(String customerName) {
    this.customerName = customerName;
  }

  public LocalDate getDateOf

















import java.time.LocalDate;

public class Bank {
    private Customer[] customers;
    private int numberOfCustomers;

    public Bank() {
        customers = new Customer[10];
        numberOfCustomers = 0;
    }

    public boolean registerCustomer(Customer customer) {
        if (numberOfCustomers == customers.length) {
            return false;
        }
        customers[numberOfCustomers] = customer;
        numberOfCustomers++;
        return true;
    }

    public Customer findCustomer(int customerId) {
        for (int i = 0; i < numberOfCustomers; i++) {
            if (customers[i].getCustomerId() == customerId) {
                return customers[i];
            }
        }
        return null;
    }

    public void printAllCustomers() {
        for (int i = 0; i < numberOfCustomers; i++) {
            System.out.println(customers[i]);
        }
    }

    public boolean deleteCustomer(int customerId) {
        for (int i = 0; i < numberOfCustomers; i++) {
            if (customers[i].getCustomerId() == customerId) {
                customers[i] = customers[numberOfCustomers - 1];
                customers[numberOfCustomers - 1] = null;
                numberOfCustomers--;
                return true;
            }
        }
        return false;
    }
}

public class Customer {
    private int customerId;
    private String customerName;
    private String contactNumber;
    private String emailAddress;
    private LocalDate dateOfBirth;
    private double monthlyIncome;
    private String profession;
    private double totalMonthlyExpenses;
    private String designation;
    private String companyName;

    public Customer(int customerId, String customerName, String contactNumber, String emailAddress,
                    LocalDate dateOfBirth, double monthlyIncome, String profession, double totalMonthlyExpenses,
                    String designation, String companyName) {
        this.customerId = customerId;
        this.customerName = customerName;
        this.contactNumber = contactNumber;
        this.emailAddress = emailAddress;
        this.dateOfBirth = dateOfBirth;
        this.monthlyIncome = monthlyIncome;
        this.profession = profession;
        this.totalMonthlyExpenses = totalMonthlyExpenses;
        this.designation = designation;
        this.companyName = companyName;
    }

    public int getCustomerId() {
        return customerId;
    }

    public String getCustomerName() {
        return customerName;
    }

    public double calculateDBR() {
        return totalMonthlyExpenses / monthlyIncome;
    }

    public double calculateMaxEligibleEMI() {
        return monthlyIncome * 0.5;
    }

    public void calculateEligibleLoanAmount() {
        // TODO: Implementation
    }

    @Override
    public String toString() {
        return "Customer{" +
                "customerId=" + customerId +
                ", customerName='" + customer







import java.time.LocalDate;

public class Main {
    public static void main(String[] args) {
        Bank bank = new Bank();
        Customer customer1 = new Customer(1, "John Doe", "123-456-7890", "john.doe@email.com", LocalDate.of(1995, 12, 12),
                5000, "Software Engineer", 1000, "Manager", "Microsoft");
        Customer customer2 = new Customer(2, "Jane Doe", "098-765-4321", "jane.doe@email.com", LocalDate.of(1996, 11, 11),
                6000, "Doctor", 1500, "Consultant", "Hospital");
        bank.registerCustomer(customer1);
        bank.registerCustomer(customer2);

        bank.printAllCustomers();
    }
}
