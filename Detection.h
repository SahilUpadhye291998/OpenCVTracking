#pragma once
#include<string>
#include<opencv\cv.hpp>
using namespace cv;
using namespace std;

class Detection
{
public:
	Detection();
	~Detection();

	//gettter and setter for xPos
	int getxPos();
	void setxPos(int XPOS);

	//getter And setter for yPos
	int getyPos();
	void setyPos(int YPOS);

	//getter and setter in HSV

	Scalar getHSVmin();
	Scalar getHSVmax();

	void SetHSVmin(Scalar min);
	void SetHSVMax(Scalar max);

private:
	int xPos;//creating the x position coordinate
	int yPos;//creating the y position coordiante
	string type;//to declare the type of the image ///eg apple,banana,cherry;

	Scalar HSVMin;
	Scalar HSVMax;

};

