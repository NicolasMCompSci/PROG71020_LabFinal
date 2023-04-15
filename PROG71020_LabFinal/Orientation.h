#pragma once

#include <iostream>
#include <fstream>

#define ORIENTATION_MIN -1
#define ORIENTATION_MAX 1

enum Label { FaceUp, FaceDown, Portrait, PortraitUpsideDown, LandscapeLeft, 
            LandscapeRight, FIRST = FaceUp, LAST = LandscapeRight, INVALID };

class Orientation
{
	double x;
	double y;
	double z;
	Label label;
    std::string orientation;
public:
	Orientation();

    double getX();
    bool setX(double newX);

    double getY();
    bool setY(double newY);

    double getZ();
    bool setZ(double newZ);

    Label getLabel();
    bool setLabel(Label newLabel);
    bool setLabel(int newLabel);

    std::string getLabelName();
    void translateOrientationFromLabel();

    Orientation inputCoordinates();

    double getDistanceFrom(Orientation rhs);
};

std::ostream& operator<<(std::ostream& cout, Orientation &orientation);
std::ofstream& operator<<(std::ofstream& fout, Orientation &orientation);