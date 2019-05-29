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

// Vektoren für erkannte Koordinaten
Vec4i left;
Vec4i right;

// Steigungen
double steigung_left;
double y_achsenabschnitt_left;
double x_Schnitt_left;
double steigung_right;
double y_achsenabschnitt_right;
double x_Schnitt_right;

int counter_left;
int counter_right;

// Distanz zum Fahrbahnrand
int distance_L;
int distance_R;

lanecalculation::lanecalculation(const Vec4i left, const Vec4i right)
{
    // Steigung links berechnen
	steigung_left = (static_cast<double>(left[3] - left[1]) / static_cast<double>(left[2] - left[0]));
	// Steigung rechts berechnen
	steigung_right = (static_cast<double>(right[3] - right[1]) / static_cast<double>(right[2] - right[0]));
	
	// y = b wenn x = 0!
	y_achsenabschnitt_left = left[1] - steigung_left * left[0];
	y_achsenabschnitt_right = right[3] - steigung_right * right[2];
	
	// Schnitt mit der x-Achse auf Höhe des Fahrzeugs (y=480)
	x_Schnitt_left = (480.0 - y_achsenabschnitt_left) / steigung_left; 
	x_Schnitt_right = (480.0 - y_achsenabschnitt_right) / steigung_right; 
	
	// Berechnung Abstand zu Fahrbahnrand
	// ANNAHME:
	//	Breite SmartVideoCar:	~180mm
	//	Breite der Strecke:		~590mm
	// Distanz in Zentimeter (Faktor 0,034)
	distance_L = (0 - x_Schnitt_left) * 0.034;		
	distance_R = (x_Schnitt_right - 640) * 0.034;
}

lanecalculation::~lanecalculation() {}

lanecalculation::getStringDistance()
{
	return "Distance left lane:  " + to_string(distance_L) + " cm\n" + "Distance right lane: " + to_string(distance_R) + " cm";
}
