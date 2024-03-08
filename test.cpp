#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;
using namespace cv;

void main() {
  VideoCapture cap(path);
  Mat img;

  while(true){
    cap >> img;
    imshow("test", img);
    waitKey(1);
  }
}
