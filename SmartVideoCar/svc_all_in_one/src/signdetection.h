#ifndef SIGNDETECTION_H_
#define SIGNDETECTION_H_

using namespace std;
using namespace cv;

class signdetection
{
private:
	// Region Of Interest
	int roi_x;
	int roi_y;
	int roi_width;
	int roi_height;
	Rect region_of_interest;

	// Matrix For Various Images
	Mat img_org;
	Mat img;
    
	bool cl1;
	bool cl2;

	CascadeClassifier Detection1; 
	CascadeClassifier Detection2;

	vector<Rect> signs1;
	vector<Rect> signs2;

    bool stopSignFlag;
    bool startSignFlag;
    int stopSignCounter;
    int startSignCounter;


public:
	signdetection(Mat);
	~signdetection();

	void loadClassifier();
    uint8_t getMotorSignal();
};

#endif	// SIGNDETECTION_H_