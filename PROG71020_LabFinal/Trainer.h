/// @file Trainer.h
/// @brief Definition of Trainer abstract class
/// 
/// File containing Trainer abstract class.
/// Machine learning models are derived
/// from this class.
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15

#pragma once

#include "Orientation.h"
#include <vector>
#include <iostream>

/// @brief Trainer abstract class
/// 
/// This abstract class models the
/// essential methods for machine learning
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15
class Trainer
{
public:

	virtual void train(std::string filename) = 0;
	virtual void readWorkingFile(std::string filename) = 0;
	virtual void predict(std::string filename) = 0;
};