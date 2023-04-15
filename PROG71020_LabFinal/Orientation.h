#pragma once

#include <iostream>


enum Label { FaceUp, FaceDown, Portrait, PortraitUpsideDown, LandscapeLeft, LandscapeRight, LAST = LandscapeRight, INVALID };

class Orientation
{
	double x;
	double y;
	double z;
	Label label;
    std::string labelName;
public:
	Orientation();
	~Orientation();

    double getX();
    void setX(double newX);

    double getY();
    void setY(double newY);

    double getZ();
    void setZ(double newZ);

    Label getLabel();
    void setLabel(Label newLabel);
    void setLabel(int newLabel);

    std::string getLabelName();
    void translateNameFromLabel();

    Orientation inputCoordinates();

    double getDistanceFrom(Orientation rhs);
};

std::ostream& operator<<(std::ostream& cout, Orientation classifier);