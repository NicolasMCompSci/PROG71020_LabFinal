#pragma once

#include "Trainer.h"

class DummyClassifier : public Trainer
{
public:

	void train(std::string filename) override;
	void readWorkingFile(std::string filename);
	void predict(std::string filename) override;

	void warning();
};