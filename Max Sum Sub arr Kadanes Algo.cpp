
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





<script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>



$(document).ready(function() {
  $('#emi-form').submit(function(event) {
    event.preventDefault();
    
    var formData = {
      principle: $('#principle').val(),
      rate: $('#rate').val(),
      tenure: $('#tenure').val()
    };
    
    $.ajax({
      type: 'POST',
      url: '/calculate-emi',
      data: JSON.stringify(formData),
      contentType: 'application/json',
      success: function(result) {
        $('#emi-result').text('EMI: ' + result.emi);
      }
    });
  });
});














var pageCounter = 1;
var animalContainer = document.getElementById("animal-info");
var btn = document.getElementById("btn");

btn.addEventListener("click", function() {
  var ourRequest = new XMLHttpRequest();
  ourRequest.open('GET', 'https://learnwebcode.github.io/json-example/animals-' + pageCounter + '.json');
  ourRequest.onload = function() {
    if (ourRequest.status >= 200 && ourRequest.status < 400) {
      var ourData = JSON.parse(ourRequest.responseText);
      renderHTML(ourData);
    } else {
      console.log("We connected to the server, but it returned an error.");
    }
    
  };

  ourRequest.onerror = function() {
    console.log("Connection error");
  };

  ourRequest.send();
  pageCounter++;
  if (pageCounter > 3) {
    btn.classList.add("hide-me");
  }
});


