#include "Detection.h"
#include<string>


Detection::Detection() :xPos(0), yPos(0)
{
}


Detection::~Detection()
{
}


//gettter and setter for xPos
int Detection::getxPos() {

	return Detection::xPos;

}
void Detection::setxPos(int XPOS) {

	xPos = XPOS;

}

//getter And setter for yPos
int Detection::getyPos() {

	return Detection::yPos;

}
void Detection::setyPos(int YPOS) {

	yPos = YPOS;

}

Scalar Detection::getHSVmin()
{
	return Detection::HSVMin;
}

Scalar Detection::getHSVmax()
{
	return Detection::HSVMax;
}

void Detection::SetHSVmin(Scalar min)
{
	Detection::HSVMin = min;
}

void Detection::SetHSVMax(Scalar max)
{
	Detection::HSVMax = max;
}