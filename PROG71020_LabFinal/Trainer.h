#pragma once

#include "Orientation.h"
#include <vector>
#include <iostream>

class Trainer
{
public:

	virtual void train(std::string filename) = 0;
	virtual void readWorkingFile(std::string filename) = 0;
	virtual void predict(std::string filename) = 0;
};