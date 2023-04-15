#pragma once

#include <iostream>


enum Label { FaceUp, FaceDown, Portrait, PortraitUpsideDown, LandscapeLeft, LandscapeRight, LAST = LandscapeRight };

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
    bool setX(double newX);

    double getY();
    bool setY(double newY);

    double getZ();
    bool setZ(double newZ);

    Label getLabel();
    bool setLabel(Label newLabel);
    bool setLabel(int newLabel);

};