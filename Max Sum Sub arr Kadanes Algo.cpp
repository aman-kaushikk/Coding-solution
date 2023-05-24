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



      









