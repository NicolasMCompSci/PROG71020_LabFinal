#pragma once

#include "Trainer.h"

class NNClassifier: public Trainer
{
	std::vector<Orientation> trained;
	std::vector<Orientation> working;

public:
	
	void train(std::string filename) override;
	void readWorkingFile(std::string filename) override;

	void predict(std::string filename) override;
	void predict(Orientation &orientation);
};