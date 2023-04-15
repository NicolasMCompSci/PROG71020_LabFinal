#pragma once

#include "Trainer.h"

class KNNClassifier : public Trainer
{
public:

	void train() override;
	void predict() override;

	void warning();
};