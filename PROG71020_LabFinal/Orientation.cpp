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

Orientation Orientation::inputCoordinates()
{
	double coordinateInput;

	std::cout << "Input X coordinate (between -1, and 1): ";
	std::cin >> coordinateInput;
	this->setX(coordinateInput);

	std::cout << "Input Y coordinate (between -1, and 1): ";
	std::cin >> coordinateInput;
	this->setY(coordinateInput);

	std::cout << "Input Z coordinate (between -1, and 1): ";
	std::cin >> coordinateInput;
	this->setZ(coordinateInput);

	return *this;
}

double Orientation::getDistanceFrom(Orientation rhs)
{
	double distanceX = this->getX() - rhs.getX();
	double distanceY = this->getY() - rhs.getY();
	double distanceZ = this->getZ() - rhs.getZ();
	double distanceFromLhsToRhs = sqrt((pow(distanceX, 2) + pow(distanceY, 2) + pow(distanceZ, 2)));
	return distanceFromLhsToRhs;
}

std::ostream& operator<<(std::ostream& cout, Orientation classifier)
{
	cout << classifier.getX() << "," << classifier.getY() << "," << classifier.getZ() << "," <<
		classifier.getLabel() << "," << classifier.getLabelName() << std::endl;
	return cout;
}
