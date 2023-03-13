
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








import java.io.IOException;
import java.io.PrintWriter;
import java.util.ArrayList;
import java.util.Collections;
import java.util.Date;
import java.util.Enumeration;
import java.util.List;
import java.util.Random;
import java.util.concurrent.TimeUnit;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;
import javax.servlet.http.HttpSession;

/**
 * Servlet implementation class TestServlet
 */
@WebServlet("/test")
public class TestServlet extends HttpServlet {
    private static final long serialVersionUID = 1L;

    private List<String> questions;
    private List<List<String>> options;
    private List<String> answers;

    /**
     * @see HttpServlet#HttpServlet()
     */
    public TestServlet() {
        super();
        // Initialize questions, options and answers
        questions = new ArrayList<>();
        questions.add("What is the capital of India?");
        questions.add("What is the largest continent in the world?");
        questions.add("What is the smallest country in the world?");
        questions.add("What is the highest mountain in the world?");
        questions.add("What is the largest ocean in the world?");
        questions.add("What is the national animal of India?");
        questions.add("What is the national bird of India?");
        questions.add("What is the national flower of India?");
        questions.add("What is the national tree of India?");
        questions.add("What is the currency of Japan?");

        options = new ArrayList<>();
        options.add(List.of("Delhi", "Mumbai", "Kolkata", "Chennai"));
        options.add(List.of("Asia", "Africa", "Europe", "North America"));
        options.add(List.of("Vatican City", "Monaco", "Nauru", "Tuvalu"));
        options.add(List.of("Mount Everest", "K2", "Kangchenjunga", "Lhotse"));
        options.add(List.of("Pacific", "Atlantic", "Indian", "Southern"));
        options.add(List.of("Tiger", "Lion", "Elephant", "Leopard"));
        options.add(List.of("Peacock


    options.add(List.of("Lotus", "Rose", "Sunflower", "Jasmine"));
    options.add(List.of("Banyan", "Mango", "Pine", "Neem"));
    options.add(List.of("Yen", "Dollar", "Euro", "Pound Sterling"));
    
    answers = new ArrayList<>();
    answers.add("Delhi");
    answers.add("Asia");
    answers.add("Vatican City");
    answers.add("Mount Everest");
    answers.add("Pacific");
    answers.add("Tiger");
    answers.add("Peacock");
    answers.add("Lotus");
    answers.add("Banyan");
    answers.add("Yen");
}

/**
 * @see HttpServlet#doGet(HttpServletRequest request, HttpServletResponse response)
 */
protected void doGet(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    doPost(request, response);
}

/**
 * @see HttpServlet#doPost(HttpServletRequest request, HttpServletResponse response)
 */
protected void doPost(HttpServletRequest request, HttpServletResponse response) throws ServletException, IOException {
    HttpSession session = request.getSession(true);
    PrintWriter out = response.getWriter();

    // Check if the test has started
    boolean testStarted = session.getAttribute("testStarted") != null ? (boolean) session.getAttribute("testStarted") : false;

    if (request.getParameter("start") != null) {
        // Start the test
        session.setAttribute("testStarted", true);
        session.setAttribute("testEnded", false);
        session.setAttribute("correctAnswers", 0);
        session.setAttribute("totalQuestions", 3);
        session.setAttribute("questionNumber", 1);

        // Randomly select 3 questions
        List<Integer> questionIndexes = new ArrayList<>();
        for (int i = 0; i < questions.size(); i++) {
            questionIndexes.add(i);
        }
        Collections.shuffle(questionIndexes, new Random());

        // Set the session attributes for the questions and options
        session.setAttribute("questionIndexes", questionIndexes);
        session.setAttribute("questionText", questions.get(questionIndexes.get(0)));
        session.setAttribute("options", options.get(questionIndexes.get(0)));
    } else if (testStarted && request.getParameter("submit") != null) {
        // Submit the answer to the current question

        // Get the selected answer
        String selectedAnswer = request.getParameter("answer");

        // Get the correct answer for the current question
        int questionIndex = (int) session.getAttribute("questionIndexes");
        String correctAnswer = answers.get(questionIndex);

        // Check if the selected answer is correct
        if (selectedAnswer != null && selectedAnswer.equals(correctAnswer)) {
            // Increment the number of correct answers
            int correctAnswers = (int) session.getAttribute("correctAnswers");
            session.setAttribute("correctAnswers", ++correctAnswers);
        }

        // Get the next question, or end the test if there are no more questions
        int questionNumber = (int) session.getAttribute("questionNumber");
        if (questionNumber == 3) {
            // End the test
            session.setAttribute("testEnded", true);
        } else {
            // Get the next question
            List<Integer> questionIndexes = (List<Integer>) session.getAttribute("questionIndexes");
            int nextQuestionIndex = questionIndexes.get(questionNumber);
            session.setAttribute("questionText", questions.get(nextQuestionIndex));
            session.setAttribute("options", options.get(nextQuestionIndex));
            session.setAttribute("questionNumber", ++questionNumber);
        }
    }

    // Display the appropriate page
    boolean testEnded = session.getAttribute("testEnded") != null ? (boolean) session.getAttribute("testEnded") : false;
    if (testStarted && !testEnded) {
        // Display the question page
        int question





        out.println("<html>");
        out.println("<head>");
        out.println("<title>Question " + session.getAttribute("questionNumber") + "</title>");
        out.println("</head>");
        out.println("<body>");
        out.println("<h1>Question " + session.getAttribute("questionNumber") + "</h1>");
        out.println("<p>" + session.getAttribute("questionText") + "</p>");
        out.println("<form method=\"post\">");
        List<String> options = (List<String>) session.getAttribute("options");
        for (int i = 0; i < options.size(); i++) {
            out.println("<input type=\"radio\" name=\"answer\" value=\"" + options.get(i) + "\">" + options.get(i) + "<br>");
        }
        out.println("<br>");
        out.println("<input type=\"submit\" name=\"submit\" value=\"Submit\">");
        out.println("</form>");
        out.println("</body>");
        out.println("</html>");
    } else if (testEnded) {
        // Display the result page
        int correctAnswers = (int) session.getAttribute("correctAnswers");
        int totalQuestions = (int) session.getAttribute("totalQuestions");
        out.println("<html>");
        out.println("<head>");
        out.println("<title>Test Result</title>");
        out.println("</head>");
        out.println("<body>");
        out.println("<h1>Test Result</h1>");
        out.println("<p>You answered " + correctAnswers + " out of " + totalQuestions + " questions correctly.</p>");
        out.println("</body>");
        out.println("</html>");
    } else {
        // Display the start page
        out.println("<html>");
        out.println("<head>");
        out.println("<title>Start Test</title>");
        out.println("</head>");
        out.println("<body>");
        out.println("<h1>Welcome to the Test</h1>");
        out.println("<form method=\"post\">");
        out.println("<input type=\"submit\" name=\"start\" value=\"Start Test\">");
        out.println("</form>");
        out.println("</body>");
        out.println("</html>");
    }

    out.close();
}





<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <title>MCQ Test</title>
</head>
<body>
    <h1>MCQ Test</h1>
    
    <c:if test="${testStarted}">
        <c:if test="${!testEnded}">
            <form action="test" method="post">
                <h2>Question ${questionNumber}:</h2>
                <p>${questionText}</p>
                
                <c:forEach items="${options}" var="option">
                    <input type="radio" name="answer" value="${option}" id="${option}"/>
                    <label for="${option}">${option}</label><br/>
                </c:forEach>
                
                <input type="submit" name="submit" value="Submit"/>
            </form>
        </c:if>

        <c:if test="${testEnded}">
            <h2>Test Ended</h2>
            <p>You have answered ${correctAnswers} out of ${totalQuestions} questions correctly.</p>
        </c:if>
    </c:if>

    <c:if test="${!testStarted}">
        <form action="test" method="post">
            <input type="submit" name="start" value="Start Test"/>
        </form>
    </c:if>
    
</body>
</html>
