
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




<label for="range-slider">Range Slider:</label>
<input type="range" id="range-slider" min="0" max="100" value="50">
<input type="text" id="range-value" value="50">


#range-slider {
  width: 100%;
  height: 20px;
  margin-bottom: 20px;
}

#range-value {
  width: 50px;
  margin-left: 10px;
}



var rangeSlider = document.getElementById("range-slider");
var rangeValue = document.getElementById("range-value");

rangeSlider.oninput = function() {
  rangeValue.value = this.value;
}

rangeValue.oninput = function() {
  rangeSlider.value = this.value;
}


