#include "Orientation.h"

Orientation::Orientation()
{
	this->x = -2;
	this->y = -2;
	this->z = -2;
	this->label = INVALID;
	this->orientation = "Invalid";
}

double Orientation::getX()
{
	return this->x;
}

bool Orientation::setX(double newX)
{
	if (newX > ORIENTATION_MAX || newX < ORIENTATION_MIN)
		return false;
	this->x = newX;
	return true;
}

double Orientation::getY()
{
	return this->y;
}

bool Orientation::setY(double newY)
{
	if (newY > ORIENTATION_MAX || newY < ORIENTATION_MIN)
		return false;
	this->y = newY;
	return true;
}

double Orientation::getZ()
{
	return this->z;
}

bool Orientation::setZ(double newZ)
{
	if (newZ > ORIENTATION_MAX || newZ < ORIENTATION_MIN)
		return false;
	this->z = newZ;
	return true;
}

Label Orientation::getLabel()
{
	return this->label;
}

bool Orientation::setLabel(Label newLabel)
{
	if (newLabel > LAST || newLabel < FIRST)
		return false;
	this->label = newLabel;
	this->translateOrientationFromLabel();
	return true;
}

bool Orientation::setLabel(int newLabel)
{
	if (newLabel > LAST || newLabel < FIRST)
		return false;
	this->label = static_cast<Label>(newLabel);
	this->translateOrientationFromLabel();
	return true;
}

std::string Orientation::getLabelName()
{
	return this->orientation;
}

void Orientation::translateOrientationFromLabel()
{
	switch (this->label) {
	case FaceUp: this->orientation = "Face Up";
		break;
	case FaceDown: this->orientation = "Face Down";
		break;
	case Portrait: this->orientation = "Portrait";
		break;
	case PortraitUpsideDown: this->orientation = "Portrait Upside Down";
		break;
	case LandscapeLeft: this->orientation = "Landscape Left";
		break;
	case LandscapeRight: this->orientation = "Landscape Right";
		break;
	default:
		break;;
	}
}

Orientation Orientation::inputCoordinates()
{
	double coordinateInput;
	bool badInput = true;

	while (badInput) {
		std::cout << "Input X coordinate (between -1, and 1): ";
		std::cin >> coordinateInput;
		if (this->setX(coordinateInput))
			badInput = false;
		else
			std::cout << "Invalid input, try again." << std::endl;
	}
	badInput = true;

	while (badInput) {
		std::cout << "Input Y coordinate (between -1, and 1): ";
		std::cin >> coordinateInput;
		if (this->setY(coordinateInput))
			badInput = false;
		else
			std::cout << "Invalid input, try again." << std::endl;
	}
	badInput = true;

	while (badInput) {
		std::cout << "Input Z coordinate (between -1, and 1): ";
		std::cin >> coordinateInput;
		if (this->setZ(coordinateInput))
			badInput = false;
		else
			std::cout << "Invalid input, try again." << std::endl;
	}

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

std::ostream& operator<<(std::ostream& cout, Orientation& orientation)
{
	cout << orientation.getX() << "," << orientation.getY() << "," << orientation.getZ() << ","
		<< orientation.getLabel() << "," << orientation.getLabelName() << std::endl;
	return cout;
}

std::ofstream& operator<<(std::ofstream& fout, Orientation& orientation)
{
	fout << orientation.getX() << "," << orientation.getY() << "," << orientation.getZ() << ","
		<< orientation.getLabel() << "," << orientation.getLabelName() << std::endl;
	return fout;
}
