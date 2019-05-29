#include <iostream>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <boost/geometry.hpp>
#include <boost/geometry/geometries/point_xy.hpp>

#include "lanedetection.h"
#include "lanecalculation.h"

using namespace std;
using namespace cv;
using namespace boost::geometry::model::d2;

// Image Dimensions
static const int IMAGEWIDTH 	= 640;
static const int IMAGEHEIGHT	= 480;

Mat frame;

int main()
{
	VideoCapture cap(0);
	cap.set(CV_CAP_PROP_FRAME_WIDTH, IMAGEWIDTH);
	cap.set(CV_CAP_PROP_FRAME_HEIGHT, IMAGEHEIGHT);

	// Kamera verfügbar?
	if(!cap.isOpened()) {
		cout<<"open error\n";
	        return -1;
	}

	while(1) {
		cap >> frame;
		if(frame.empty()) {
			cout << "capture error\n" << endl;
		}
		
		lanedetection laneDetect;
		laneDetect(frame);

		Vec4i left_detect = laneDetect.getLeft();
		Vec4i right_detect = laneDetect.getRight();

		lanecalculation laneCalc;
		laneCalc(left_detect, right_detect);

		// Punkt für Position des Textes
		Point textPosition (10, (frame.rows - 30));
		Mat frame_lines = laneDetect.getLaneImage();
		Mat frame_edges = laneDetect.getEdgeImage();
		string distance = laneCalc.getStringDistance();
		
		// Text einfügen
		putText(frame_lines, distance, textPosition, FONT_HERSHEY_SIMPLEX, 0.5, Scalar::all(255), 1, 8);
		
		namedWindow("OrgImage");
		moveWindow("OrgImage", 10, 30);
		imshow("OrgImage", frame_lines);
		
		// Window to show Edge Detection
		namedWindow("EdgeImage");
		moveWindow("EdgeImage", 10, 550);
		imshow("EdgeImage", frame_edges);
		
		// 50 = 50 ms | 27 = ESC zum abbrechen des Programms
		if(waitKey(50) == 27) {
			cout << "finished successful\n";
			break;
		}
	}
	
	return 0;
}