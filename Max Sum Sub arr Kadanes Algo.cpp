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


        

