#pragma once

#include "Trainer.h"

class DummyClassifier : public Trainer
{
public:

	void train(std::string filename) override;
	void predict(std::string filename) override;

	void warning();
};