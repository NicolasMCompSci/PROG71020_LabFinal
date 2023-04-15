#include "Orientation.h"

Orientation::Orientation()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	this->label = INVALID;
	this->labelName = "Invalid";
}

Orientation::~Orientation()
{
}

double Orientation::getX()
{
	return 0.0;
}

void Orientation::setX(double newX)
{
}

double Orientation::getY()
{
	return 0.0;
}

void Orientation::setY(double newY)
{
}

double Orientation::getZ()
{
	return 0.0;
}

void Orientation::setZ(double newZ)
{
}

Label Orientation::getLabel()
{
	return Label();
}

void Orientation::setLabel(Label newLabel)
{
	this->translateNameFromLabel();
}

void Orientation::setLabel(int newLabel)
{
	this->translateNameFromLabel();
}

std::string Orientation::getLabelName()
{
	return this->labelName;
}

void Orientation::translateNameFromLabel()
{
	switch (this->label) {
	case FaceUp: this->labelName = "Face Up";
	case FaceDown: this->labelName = "Face Down";
	case Portrait: this->labelName = "Portrait";
	case PortraitUpsideDown: this->labelName = "Portrait Upside Down";
	case LandscapeLeft: this->labelName = "Landscape Left";
	case LandscapeRight: this->labelName = "Landscape Right";
	default:;
	}
}

std::ostream& operator<<(std::ostream& cout, Orientation classifier)
{
	cout << classifier.getX() << "," << classifier.getY() << "," << classifier.getZ() << "," <<
		classifier.getLabel() << "," << classifier.getLabelName() << std::endl;
	return cout;
}
