#include <iostream>
#include <stdlib.h>
#include <unistd.h>

#include <opencv/cv.h>
#include <opencv2/opencv.hpp>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/objdetect/objdetect.hpp>

#include <wiringPi.h>

#include "signdetection.h"

using namespace std;
using namespace cv;

extern const int IMAGEWIDTH;
extern const int IMAGEHEIGHT;

signdetection::signdetection(Mat img_org)
{
	this->img_org = img_org;

	// Region of Interest
	roi_x = (IMAGEWIDTH / 2.46);
	roi_y = (IMAGEHEIGHT / 6);
	roi_width = (IMAGEWIDTH / 1.685);
	roi_height = (IMAGEHEIGHT / 3.6);
	region_of_interest = Rect(roi_x, roi_y, roi_width, roi_height);	// 640x360 (x=260, y=60, w=380, h=100)
    img = img_org(region_of_interest);

    // Laden der Cascades fuer die Schilderkennung
	cl1 = Detection1.load("./cascade.xml");
	if (!cl1){
		cout << "\n Cascade (STOP SCHILD) is not loaded properly" << '\n';
		exit(0);
	}

	cl2 = Detection2.load("./stopSignDetector_yellow.xml");
	if (!cl2){
		cout << "\n Cascade (VORFAHRT) is not loaded properly" << '\n';
		exit(0);
	}

    Detection1.detectMultiScale(img, signs1, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(30,30));  //detect min neighbors 3 statt 2
    Detection2.detectMultiScale(img, signs2, 1.1, 2, 0|CASCADE_SCALE_IMAGE, Size(30,30));  //detect

    if(signs1.size() != 0){
        //digitalWrite(LED_ROT, HIGH);
        //ARDUINO STOP
        if(stopSignCounter > 3) {
            stopSignFlag = true;
        }
        stopSignCounter += 1;
    } else {
        //digitalWrite(LED_ROT, LOW);
        stopSignFlag = false;
        stopSignCounter = 0;
    }

    if(signs2.size() != 0){
        //digitalWrite(LED_GELB, HIGH);
        //ARDUINO START
        if(startSignCounter > 3) {
            startSignFlag = true;
        }
        startSignCounter += 1;
    } else {
        //digitalWrite(LED_GELB, LOW);
        startSignFlag = false;
        startSignCounter = 0;
    }

// Rechteck um Schild zeichnen
//    for(int i = 0; i < signs.size(); i++){
//        Point pt1(signs[i].x, signs[i].y);
//        Point pt2((signs[i].x + signs[i].height), (signs[i].y + signs[i].width));
//        rectangle(img, pt1, pt2, Scalar(255, 255, 255), 2, 8, 0);
//    }
//    for(int i = 0; i < signs2.size(); i++){
//        Point pt12(signs2[i].x, signs2[i].y);
//        Point pt22((signs2[i].x + signs2[i].height), (signs2[i].y + signs2[i].width));
//        rectangle(img, pt12, pt22, Scalar(255, 255, 255), 2, 8, 0);
//    }

}

signdetection::~signdetection() {}

void signdetection::loadClassifier() {
    // Laden der Cascades fuer die Schilderkennung
	cl1 = Detection1.load("./cascade.xml");
	if (!cl1){
		cout << "\n Cascade (STOP SCHILD) is not loaded properly" << '\n';
		exit(0);
	}

	cl2 = Detection2.load("./stopSignDetector_yellow.xml");
	if (!cl2){
		cout << "\n Cascade (VORFAHRT) is not loaded properly" << '\n';
		exit(0);
	}
}

uint8_t signdetection::getMotorSignal() {
    if(stopSignFlag) {
        return 200;
    }
    if(startSignFlag) {
        return 210;
    }
}