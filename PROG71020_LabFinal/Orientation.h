/// @file Orientation.h
/// @brief Definition of Orientation class and its
/// operator overloads.
/// 
/// File containing Orientation class, 
/// as well as operator overloads relating to
/// outputing the class.
///
/// @author Nicolas Masquieto
/// @date 2023-04-15

#pragma once

#include <iostream>
#include <fstream>

// minimum and maximum values for orientation
#define ORIENTATION_MIN -1
#define ORIENTATION_MAX 1

/// @brief The Orientation Label
/// 
/// enum that simulates the label of an orientation
/// Guard values set, such as INVALID, FIRST, nad LAST
/// to detect errors.
/// 
/// @author 
/// @date 
enum Label { INVALID, FaceUp, FaceDown, Portrait, PortraitUpsideDown, LandscapeLeft, 
            LandscapeRight, FIRST = FaceUp, LAST = LandscapeRight };

/// @brief The Orientation class stores 3-D gavity vector data.
/// 
/// The Orientation class is used to store, and perform
/// operations upon 3-D gavity vector data.
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15
class Orientation
{
	double x;
	double y;
	double z;
	Label label;
    std::string orientation;
public:
    /// @brief Initializes orientation with invalid values
    /// 
    /// Default contructor of Orientation class
    /// Initializes the Orientation with invalis values
    /// so that it can be recognized if it is not changed later
    /// 
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
	Orientation();

    /// @brief Gets x value of coordinate
    /// 
    /// @return The x value of the coordiate
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    double getX();
    /// @brief Sets the x coordinate
    /// 
    /// @param the new x coodinate
    /// @return a boolean telling whether the input was
    /// valid or not
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    bool setX(double newX);

    /// @brief Gets y value of coordinate
    /// 
    /// @return The y value of the coordiate
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    double getY();
    /// @brief Sets the y coordinate
    /// 
    /// @param the new y coodinate
    /// @return a boolean telling whether the input was
    /// valid or not
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    bool setY(double newY);

    /// @brief Gets z value of coordinate
    /// 
    /// @return The z value of the coordiate
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    double getZ();
    /// @brief Sets the z coordinate
    /// 
    /// @param the new z coodinate
    /// @return a boolean telling whether the input was
    /// valid or not
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    bool setZ(double newZ);

    /// @brief Gets the coordinate label
    /// 
    /// @return The coordinate's label
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    Label getLabel();
    /// @brief Sets the coordinate label
    /// 
    /// @param the new label as a Label ADT
    /// @return a boolean telling whether the input was
    /// valid or not
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    bool setLabel(Label newLabel);
    /// @brief Sets the coordinate label
    /// 
    /// @param the new label as an int
    /// @return a boolean telling whether the input was
    /// valid or not
    /// @author Nicolas Masquieto
    bool setLabel(int newLabel);

    /// @brief Gets the name of the coordinate
    /// 
    /// @return The coordinate's label
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    std::string getLabelName();
    /// @brief Transform label value into name
    /// 
    /// Translates label value into a string that will be passed
    /// into the label name for the coordinate
    /// 
    /// @return The coordinate's label
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    void translateOrientationFromLabel();

    /// @brief Asks user for input for x,y,z coordinates
    /// 
    /// @return A copy of the orientation created
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    Orientation inputCoordinates();
    /// @brief Calculates distance between this 
    /// object agaisnt another
    /// 
    /// @param rhs, the orientation being compared to
    /// @return The distance betweem the 2 Orientations 
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
    double getDistanceFrom(Orientation rhs);
};

std::ostream& operator<<(std::ostream& cout, Orientation &orientation);
std::ofstream& operator<<(std::ofstream& fout, Orientation &orientation);