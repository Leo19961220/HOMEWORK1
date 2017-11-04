#include <cv.h>
#include "opencv2/highgui/highgui.hpp"
#include <iostream>
#include <vector>

using namespace std;

int main()
{
IplImage * pic;
pic = cvLoadImage("87.jpg");
cvNamedWindow("test_demo", 1);
cvShowImage("test_demo", pic);
cvWaitKey(0);
cvDestroyWindow("test_demo");
cvReleaseImage(&pic);
return 0;
}
