
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







import java.util.*;

public interface Sorter {
    int[] sort(int[] numbers);
}

public class NumberSorter {
    public List<Integer> sort(List<Integer> numbers) {
        Collections.sort(numbers);
        return numbers;
    }
}

public class SortListAdapter implements Sorter {

    private NumberSorter numberSorter;

    public SortListAdapter() {
        numberSorter = new NumberSorter();
    }

    @Override
    public int[] sort(int[] numbers) {
        // convert the array to a List
        List<Integer> numberList = new ArrayList<Integer>();
        for (int i = 0; i < numbers.length; i++) {
            numberList.add(numbers[i]);
        }
        
        // call the adapter
        numberList = numberSorter.sort(numberList);

        // convert the list back to an array and return
        int[] sortedNumbers = new int[numberList.size()];
        for (int i = 0; i < sortedNumbers.length; i++) {
            sortedNumbers[i] = numberList.get(i);
        }
        return sortedNumbers;
    }
}














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




public static void main(String[] args) {
    Sorter sorter = new SortListAdapter();
    int[] numbers = {4, 2, 7, 1, 3, 6, 5};
    numbers = sorter.sort(numbers);
    System.out.println(Arrays.toString(numbers));
}

