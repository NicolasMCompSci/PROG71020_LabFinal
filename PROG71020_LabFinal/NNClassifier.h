#pragma once

#include "Trainer.h"

class NNClassifier: public Trainer
{
public:
	
	void train(std::string filename) override;
	void predict(std::string filename) override;
};