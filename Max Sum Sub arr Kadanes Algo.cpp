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
















<!DOCTYPE html>

<html>

<head>

  <title>Camera Capture</title>

  <link rel="stylesheet" type="text/css" href="styles.css">

</head>

<body>

  <h1>Camera Capture</h1>

  <button id="capture-btn">Capture Image</button>

  <div id="image-container"></div>

  <script src="script.js"></script>

</body>

</html>



body {

  font-family: Arial, sans-serif;

  margin: 0;

  padding: 20px;

  text-align: center;

}

h1 {

  margin-bottom: 20px;

}

button {

  padding: 10px 20px;

  font-size: 16px;

  margin-bottom: 20px;

}

#image-container {

  display: flex;

  flex-wrap: wrap;

  justify-content: center;

}

.image-preview {

  width: 200px;

  height: 150px;

  margin: 10px;

  border: 2px solid #ccc;

  border-radius: 5px;

  overflow: hidden;

}

.image-preview img {

  width: 100%;

  height: 100%;

  object-fit: cover;

}


navigator.mediaDevices.getUserMedia({ video: true })

  .then(function (stream) {

    var video = document.createElement('video');

    video.srcObject = stream;

    video.play();

    var container = document.getElementById('image-container');

    var captureBtn = document.getElementById('capture-btn');

    var imageCount = 0;

    captureBtn.addEventListener('click', function () {

      var canvas = document.createElement('canvas');

      canvas.width = video.videoWidth;

      canvas.height = video.videoHeight;

      var context = canvas.getContext('2d');

      context.drawImage(video, 0, 0, canvas.width, canvas.height);

      var dataURL = canvas.toDataURL('image/png');

      var image = document.createElement('img');

      image.src = dataURL;

      var previewContainer = document.createElement('div');

      previewContainer.classList.add('image-preview');

      previewContainer.appendChild(image);

      container.appendChild(previewContainer);

      imageCount++;

      if (imageCount >= 50) {

        captureBtn.disabled = true;

        stream.getTracks().forEach(function (track) {

          track.stop();

        });

      }

    });

  })

  .catch(function (error) {

    console.log('Error accessing camera:', error);

  })
      
      
      
      
      import java.awt.image.BufferedImage;

import java.io.File;

import java.io.IOException;

import javax.imageio.ImageIO;

public class ImageCapture {

    private static final String FOLDER_PATH = "/path/to/folder"; // Specify the folder path here

    public static void main(String[] args) {

        int imageCount = 50; // Number of images to capture

        for (int i = 1; i <= imageCount; i++) {

            String imageName = "image" + i + ".png"; // Image filename

            captureAndSaveImage(imageName);

        }

    }

    private static void captureAndSaveImage(String imageName) {

        try {

            // Capture image using your preferred method

            BufferedImage image = captureImage();

            // Save the image to the specified folder

            File outputFile = new File(FOLDER_PATH, imageName);

            ImageIO.write(image, "png", outputFile);

            System.out.println("Image saved: " + imageName);

        } catch (IOException e) {

            System.out.println("Error saving image: " + e.getMessage());

        }

    }

    // Implement the logic to capture an image using your preferred method

    private static BufferedImage captureImage() {

        // Replace this code with your image capture logic

        // Example: Use libraries like OpenCV or JavaFX to capture an image from a camera or other sources

        // You can also load an existing image using ImageIO.read() method

        BufferedImage image = null;

        // Capture image logic here...

        return image;

    }

}



      
import org.bytedeco.javacpp.opencv_core;
import org.bytedeco.javacpp.opencv_videoio.VideoCapture;

import javax.imageio.ImageIO;
import java.awt.image.BufferedImage;
import java.io.File;
import java.io.IOException;

public class ImageCapture {

    private static final String FOLDER_PATH = "/path/to/folder"; // Specify the folder path here
    private static final String IMAGE_FORMAT = "png";

    public static void main(String[] args) {
        int imageCount = 50; // Number of images to capture

        for (int i = 1; i <= imageCount; i++) {
            String imageName = "image" + i + "." + IMAGE_FORMAT; // Image filename
            captureAndSaveImage(imageName);
        }
    }

    private static void captureAndSaveImage(String imageName) {
        try {
            // Open the default camera
            VideoCapture videoCapture = new VideoCapture(0);

            // Check if the camera is opened successfully
            if (videoCapture.isOpened()) {
                // Read the current frame from the camera
                opencv_core.Mat frame = new opencv_core.Mat();
                videoCapture.read(frame);

                // Convert the frame to a BufferedImage
                BufferedImage image = Java2DFrameConverter.convert(frame);

                // Save the image to the specified folder
                File outputFile = new File(FOLDER_PATH, imageName);
                ImageIO.write(image, IMAGE_FORMAT, outputFile);

                System.out.println("Image saved: " + imageName);

                // Release resources
                frame.release();
                videoCapture.release();
            } else {
                System.out.println("Failed to open camera");
            }
        } catch (IOException e) {
            System.out.println("Error saving image: " + e.getMessage());
        }
    }
}




import javafx.application.Application;

import javafx.embed.swing.SwingFXUtils;

import javafx.scene.Group;

import javafx.scene.Scene;

import javafx.scene.SnapshotParameters;

import javafx.scene.control.Button;

import javafx.scene.image.WritableImage;

import javafx.stage.Stage;

import javax.imageio.ImageIO;

import java.io.File;

import java.io.IOException;

public class ImageCapture extends Application {

    private static final String FOLDER_PATH = "/path/to/folder"; // Specify the folder path here

    private int imageCount = 0;

    private int totalImages = 50;

    public static void main(String[] args) {

        launch(args);

    }

    @Override

    public void start(Stage primaryStage) {

        primaryStage.setTitle("Image Capture");

        Button captureButton = new Button("Capture Image");

        captureButton.setLayoutX(10);

        captureButton.setLayoutY(10);

        captureButton.setOnAction(event -> {

            if (imageCount < totalImages) {

                captureImage();

            } else {

                System.out.println("Image capture completed.");

            }

        });

        Group root = new Group();

        root.getChildren().add(captureButton);

        Scene scene = new Scene(root, 300, 200);

        primaryStage.setScene(scene);

        primaryStage.show();

    }

    private void captureImage() {

        try {

            // Capture the screen as a WritableImage

            WritableImage writableImage = new WritableImage((int) getWidth(), (int) getHeight());

            SnapshotParameters parameters = new SnapshotParameters();

            parameters.setDepthBuffer(true);

            parameters.setFill(javafx.scene.paint.Color.TRANSPARENT);

            getRoot().snapshot(parameters, writableImage);

            // Save the image to the specified folder

            String imageName = "image" + (++imageCount) + ".png"; // Image filename

            File outputFile = new File(FOLDER_PATH, imageName);

            ImageIO.write(SwingFXUtils.fromFXImage(writableImage, null), "png", outputFile);

            System.out.println("Image saved: " + imageName);

        } catch (IOException e) {

            System.out.println("Error saving image: " + e.getMessage());

        }

    }

}





import java.awt.*;

import java.awt.image.BufferedImage;

import java.io.File;

import java.io.IOException;

import javax.imageio.ImageIO;

import javax.swing.*;

public class ImageCapture {

    private static final String FOLDER_PATH = "/path/to/folder"; // Specify the folder path here

    private int imageCount = 0;

    private int totalImages = 50;

    public static void main(String[] args) {

        SwingUtilities.invokeLater(() -> {

            ImageCapture imageCapture = new ImageCapture();

            imageCapture.start();

        });

    }

    private void start() {

        JFrame frame = new JFrame("Image Capture");

        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

        JButton captureButton = new JButton("Capture Image");

        captureButton.addActionListener(e -> {

            if (imageCount < totalImages) {

                captureImage();

            } else {

                System.out.println("Image capture completed.");

            }

        });

        frame.getContentPane().add(captureButton);

        frame.pack();

        frame.setVisible(true);

    }

    private void captureImage() {

        try {

            // Create a Robot instance to capture the screen

            Robot robot = new Robot();

            // Capture the screen as a BufferedImage

            Rectangle screenRect = new Rectangle(Toolkit.getDefaultToolkit().getScreenSize());

            BufferedImage image = robot.createScreenCapture(screenRect);

            // Save the image to the specified folder

            String imageName = "image" + (++imageCount) + ".png"; // Image filename

            File outputFile = new File(FOLDER_PATH, imageName);

            ImageIO.write(image, "png", outputFile);

            System.out.println("Image saved: " + imageName);

        } catch (AWTException | IOException e) {

            System.out.println("Error saving image: " + e.getMessage());

        }

    }

}



import org.bytedeco.javacv.*;

import javax.imageio.ImageIO;

import java.io.File;

import java.io.IOException;

public class WebcamCapture {

    private static final String FOLDER_PATH = "/path/to/folder"; // Specify the folder path here

    private int imageCount = 0;

    private int totalImages = 50;

    public static void main(String[] args) {

        WebcamCapture webcamCapture = new WebcamCapture();

        webcamCapture.captureImages();

    }

    private void captureImages() {

        FrameGrabber grabber = new OpenCVFrameGrabber(0); // 0 represents the default webcam

        try {

            grabber.start();

            CanvasFrame canvasFrame = new CanvasFrame("Webcam Capture", CanvasFrame.getDefaultGamma() / grabber.getGamma());

            canvasFrame.setDefaultCloseOperation(javax.swing.JFrame.EXIT_ON_CLOSE);

            while (imageCount < totalImages) {

                Frame frame = grabber.grab();

                canvasFrame.showImage(frame);

                if (frame != null) {

                    String imageName = "image" + (++imageCount) + ".png"; // Image filename

                    File outputFile = new File(FOLDER_PATH, imageName);

                    ImageIO.write(FrameToBufferedImage(frame), "png", outputFile);

                    System.out.println("Image saved: " + imageName);

 

    
import cv2

folder_path = "/path/to/folder"  # Specify the folder path here

image_count = 0

total_images = 50

# Initialize webcam

capture = cv2.VideoCapture(0)

while image_count < total_images:

    ret, frame = capture.read()

    if ret:

        # Display the captured frame

        cv2.imshow("Webcam", frame)

        # Save the frame as an image file

        image_name = f"image{image_count}.png"

        file_path = folder_path + "/" + image_name

        cv2.imwrite(file_path, frame)

        print("Image saved:", image_name)

        image_count += 1

    # Break the loop if 'q' is pressed

    if cv2.waitKey(1) & 0xFF == ord("q"):

        break

# Release the webcam and close windows

capture.release()

cv2.destroyAllWindows()


        
            
            
            <!DOCTYPE html>

<html>

<head>

    <title>Live Clock</title>

    <script>

        function updateClock() {

            var currentTime = new Date();

            var hours = currentTime.getHours();

            var minutes = currentTime.getMinutes();

            var seconds = currentTime.getSeconds();

            

            // Pad single-digit numbers with leading zeros

            hours = (hours < 10 ? "0" : "") + hours;

            minutes = (minutes < 10 ? "0" : "") + minutes;

            seconds = (seconds < 10 ? "0" : "") + seconds;

            

            var timeString = hours + ":" + minutes + ":" + seconds;

            

            document.getElementById("clock").innerHTML = timeString;

        }

        

        // Update the clock every second

        setInterval(updateClock, 1000);

    </script>

</head>

<body>

    <h1>Live Clock</h1>

    <div id="clock"></div>

</body>

</html>
        
        
import org.springframework.web.bind.annotation.CookieValue;
import org.springframework.web.bind.annotation.GetMapping;
import org.springframework.web.bind.annotation.RestController;

@RestController
public class MyController {

    @GetMapping("/authenticate")
    public String authenticate(@CookieValue("cookieName") String cookieValue) {
        // Perform authentication logic using the cookie value
        // You can access the cookie value in the 'cookieValue' parameter

        // Example authentication logic:
        if ("validCookieValue".equals(cookieValue)) {
            // Authentication successful
            return "<html><body><h1>Authentication Successful</h1></body></html>";
        } else {
            // Authentication failed
            return "<html><body><h1>Authentication Failed</h1></body></html>";
        }
    }
}

                    
                    
                    
                    
        
fetch("/authenticate", {

  headers: {

    "Cookie": "cookieName=validCookieValue"

  }

})

.then(response => response.text())

.then(htmlResponse => {

  // Process the HTML response

  console.log(htmlResponse);

});


















<!DOCTYPE html>
<html>
<head>
    <title>Customer Form</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
</head>
<body>
    <h1>Customer Form</h1>
    <form id="customerForm">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>
        <br>
        <h3>Addresses</h3>
        <div id="addressContainer">
            <div class="address">
                <label for="street">Street:</label>
                <input type="text" name="addresses[0].street" required>
                <label for="city">City:</label>
                <input type="text" name="addresses[0].city" required>
                <label for="state">State:</label>
                <input type="text" name="addresses[0].state" required>
                <label for="postalCode">Postal Code:</label>
                <input type="text" name="addresses[0].postalCode" required>
            </div>
        </div>
        <br>
        <button type="button" onclick="addAddress()">Add Address</button>
        <button type="submit">Save</button>
    </form>
    <br>
    <h3>Search</h3>
    <input type="text" id="searchName" placeholder="Search by name">
    <button type="button" onclick="searchCustomers()">Search</button>

    <div id="customerList"></div>

    <script>
        function addAddress() {
            const addressContainer = $("#addressContainer");

            const addressIndex = addressContainer.children().length;
            const newAddressDiv = $("<div class='address'>");
            const addressFields = `
                <label for="street">Street:</label>
                <input type="text" name="addresses[${addressIndex}].street" required>
                <label for="city">City:</label>
                <input type="text" name="addresses[${addressIndex}].city" required>
                <label for="state">State:</label>
                <input type="text" name="addresses[${addressIndex}].state" required>
                <label for="postalCode">Postal Code:</label>
                <input type="text" name="addresses[${addressIndex}].postalCode" required>
            `;

            newAddressDiv.html(addressFields);

            addressContainer.append(newAddressDiv);
        }

        function searchCustomers() {
            const searchName = $("#searchName").val();

            $.ajax({
                url: "/customer/search",
                type: "GET",
                data: { name: searchName },
                success: function(data) {
                    displayCustomers(data);
                },
                error: function(error) {
                    console.log(error);
                }
            });
        }

        function displayCustomers(customers) {
            const customerList = $("#customerList");
            customerList.empty();

            customers.forEach(function(customer) {
                const customerDiv = $("<div>");
                const customerName = $("<h4>").text("Name: " + customer.name);
                
                const addressesDiv = $("<div>");
                customer.addresses.forEach(function(address) {
                    const addressText = $("<p>").text("Address: " + address.street + ", " + address.city + ", " + address.state + ", " + address.postalCode);
                    addressesDiv.append(addressText);
                });
                
                customerDiv.append(customerName, addressesDiv);
                customerList.append(customerDiv);
            });
        }

        $("#customerForm").submit(function(event) {
            event.preventDefault();

            const formData = $(this).serialize();

            $.ajax({
                url: "/customer",
                type: "POST",
                data: formData,
                success: function(data) {
                    alert("Customer saved successfully");
                    $("#customerForm")[0].reset();
                },
                error: function(error) {
                    console.log(error);
                }
            });
        });
    </script>
</body>
</html>





<!DOCTYPE html>
<html>
<head>
    <title>Student Form</title>
    <script src="https://code.jquery.com/jquery-3.6.0.min.js"></script>
</head>
<body>
    <h1>Student Form</h1>
    <form id="studentForm">
        <label for="name">Name:</label>
        <input type="text" id="name" name="name" required>
        <br>
        <label for="college">College:</label>
        <input type="text" id="college" name="college" required>
        <br>
        <label for="course">Course:</label>
        <input type="text" id="course" name="course" required>
        <br>
        <h3>Address</h3>
        <label for="addressLine1">Address Line 1:</label>
        <input type="text" id="addressLine1" name="address.addressLine1" required>
        <br>
        <label for="addressLine2">Address Line 2:</label>
        <input type="text" id="addressLine2" name="address.addressLine2">
        <br>
        <label for="city">City:</label>
        <input type="text" id="city" name="address.city" required>
        <br>
        <label for="state">State:</label>
        <input type="text" id="state" name="address.state" required>
        <br>
        <label for="zip">ZIP Code:</label>
        <input type="text" id="zip" name="address.zip" required>
        <br>
        <button type="submit">Save</button>
    </form>

    <script>
        $("#studentForm").submit(function(event) {
            event.preventDefault();

            const formData = $(this).serialize();

            $.ajax({
                url: "/student",
                type: "POST",
                data: formData,
                success: function(data) {
                    alert("Student saved successfully");
                    $("#studentForm")[0].reset();
                },
                error: function(error) {
                    console.log(error);
                }
            });
        });
    </script>
</body>
</html>

        

