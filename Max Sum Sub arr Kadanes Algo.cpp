
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






<!DOCTYPE html>
<html>
  <head>
    <title>Name Validation</title>
  </head>
  <body>
    <form>
      <label for="firstName">First Name:</label>
      <input type="text" id="firstName" name="firstName" oninput="validateName()" required>

      <label for="lastName">Last Name:</label>
      <input type="text" id="lastName" name="lastName" oninput="validateName()" required>

      <p id="validationResult"></p>
    </form>

    <script>
      function validateName() {
        const firstName = document.getElementById("firstName").value;
        const lastName = document.getElementById("lastName").value;
        const regex = /^[a-zA-Z]{3,}$/; // Matches 3 or more alphabets only

        if (regex.test(firstName) && regex.test(lastName)) {
          document.getElementById("validationResult").textContent = "Valid names";
        } else {
          document.getElementById("validationResult").textContent = "Invalid names";
        }
      }
    </script>
  </body>
</html>








<!DOCTYPE html>
<html>
<head>
	<title>Sample Form</title>
	<!-- Adding Bootstrap CSS -->
	<link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
</head>
<body>
	<div class="container">
		<h2>Sample Form</h2>
		<form>
			<div class="form-group">
				<label for="input-field">Input Field:</label>
				<input type="text" class="form-control" id="input-field">
				<label for="display-field">Display Field:</label>
				<label class="form-control" id="display-field"></label>
			</div>
			<div class="form-group">
				<label for="drop-down">Drop Down:</label>
				<select class="form-control" id="drop-down">
					<option value="">--Select--</option>
				</select>
				<!-- Adding tooltip -->
				<span class="glyphicon glyphicon-info-sign" data-toggle="tooltip" data-placement="right" title="" id="tooltip"></span>
			</div>
			<div class="form-group">
				<label for="date-field">Date Field:</label>
				<input type="text" class="form-control" id="date-field" readonly>
			</div>
			<div class="form-group">
				<label>Checkbox:</label>
				<input type="checkbox" id="checkbox">
				<label for="yes-radio">Yes</label>
				<input type="radio" name="radio" id="yes-radio">
				<label for="no-radio">No</label>
				<input type="radio" name="radio" id="no-radio" checked>
			</div>
			<button type="submit" class="btn btn-primary">Submit</button>
		</form>
	</div>
	<!-- Adding jQuery -->
	<script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
	<!-- Adding Bootstrap JS -->
	<script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
	<script>
		// Adding values to drop-down using jQuery
		$(document).ready(function(){
			$('#drop-down').append($('<option>', {
				value: 'value1',
				text: 'Value 1'
			}));
			$('#drop-down').append($('<option>', {
				value: 'value2',
				text: 'Value 2'
			}));
			$('#drop-down').append($('<option>', {
				value: 'value3',
				text: 'Value 3'
			}));
		});

		// Displaying selected value in tooltip
		$(document).ready(function(){
			$('#drop-down').change(function(){
				$('#tooltip').attr('title', $(this).val()).tooltip('fixTitle');
			});
		});

		// Hiding date picker and enabling text field
		$(document).ready(function(){
			$('#date-field').datepicker({
				autoclose: true,
				todayHighlight: true
			}).on('show', function(e){
				e.preventDefault();
				e.stopPropagation();
			});
			$('#date-field').click(function(){
				$('#date-field').datepicker('show');
			}).on('change', function(){
				$('#date-field').datepicker('hide');
			});
			$('#date-field').focus(function(){
				$('.datepicker').hide();
			});
		});

		





$(document).ready(function(){
			// Default values
			$('#no-radio').prop('checked', true);
			$('#checkbox').prop('checked', false);

			// Checkbox click event
			$('#checkbox').click(function(){
				if($(this).prop('checked')){
					$('#yes-radio').prop('checked', true);
				}else{
					$('#no-radio').prop('checked', true);
				}
			});

			// Radio button click event
			$('input[name="radio"]').click(function(){
				if($('#yes-radio').prop('checked')){
					$('#checkbox').prop('checked', true);
				}else{
					$('#checkbox').prop('checked', false);
				}
			});
		});















<!DOCTYPE html>
<html lang="en">
<head>
  <meta charset="UTF-8">
  <title>jQuery Bootstrap Form</title>
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap.min.css">
  <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/css/bootstrap-theme.min.css">
  <script src="https://ajax.googleapis.com/ajax/libs/jquery/3.5.1/jquery.min.js"></script>
  <script src="https://maxcdn.bootstrapcdn.com/bootstrap/3.3.7/js/bootstrap.min.js"></script>
</head>
<body>

  <div class="container">
  
    <h1>jQuery Bootstrap Form</h1>
    
    <form>
      <div class="form-group">
        <label for="inputField">Input Field</label>
        <input type="text" class="form-control" id="inputField">
        <label for="displayLabel">Label Field</label>
        <label class="form-control" id="displayLabel"></label>
      </div>
      <div class="form-group">
        <label for="dropDown">Dropdown</label>
        <select class="form-control" id="dropDown">
          <option value="">--Select an option--</option>
        </select>
      </div>
      <div class="form-group">
        <label for="dateField">Date Field</label>
        <input type="text" class="form-control" id="dateField">
        <div class="datepicker"></div>
      </div>
      <div class="form-group">
        <label for="checkbox">Checkbox</label>
        <input type="checkbox" id="checkbox">
        <label for="yesRadio">Yes</label>
        <input type="radio" id="yesRadio" name="radio">
        <label for="noRadio">No</label>
        <input type="radio" id="noRadio" name="radio" checked>
      </div>
      <button type="submit" class="btn btn-default">Submit</button>
    </form>
  
  </div>

  <script>
    // Your jQuery code goes here
  </script>

</body>
</html>








$(document).ready(function() {
  // Add options to the dropdown
  $("#dropDown").append('<option value="option1">Option 1</option>');
  $("#dropDown").append('<option value="option2">Option 2</option>');
  $("#dropDown").append('<option value="option3">Option 3</option>');

  // Show tooltip on dropdown selection
  $("#dropDown").change(function() {
    $(this).attr("title", $(this).val());
    $(this).tooltip("show");
  });

  // Initialize datepicker and hide datepicker area
  $("#dateField").datepicker({
    showOn: "button",
    buttonImage: "https://jqueryui.com/resources/demos/datepicker/images/calendar.gif",
    buttonImageOnly: true,
    buttonText: "Select date",
    beforeShow: function(input, inst) {
      $(".datepicker").hide();
    },
    onSelect: function(dateText, inst) {
      $(this).val(dateText);
    }
  });
  $(".datepicker").hide();

  // Handle checkbox and radio buttons
  $("#checkbox").change(function() {
    if ($(this).prop("checked")) {
      $("#yesRadio").prop("checked", true);
    } else {
      $("#noRadio").prop("checked", true);
    }
  });
  $("input[name='radio']").change(function() {
    if ($("#yesRadio").prop("checked")) {
      $("#checkbox").prop("checked", true);
    } else {
      $("#checkbox").prop("checked", false);
    }
  });

  // Handle input field and label display
  $("#inputField").on("input", function() {
    $("#displayLabel").text($(this).val());
  });
});






.datepicker {
  position: relative;
}
.datepicker img {
  cursor: pointer;
  margin-left: 5px;
}





