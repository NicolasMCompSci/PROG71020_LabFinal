#pragma once

#include "Orientation.h"
#include <vector>
#include <iostream>

class Trainer
{
	std::vector<Orientation> trained;
	std::vector<Orientation> working;

public:

	virtual void train(std::string filename) = 0;
	virtual void predict(std::string filename) = 0;
};