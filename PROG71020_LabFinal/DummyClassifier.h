/// @file DummyClassifier.h
/// @brief Definition of DummyClassifier class
/// 
/// ===================
/// NOT YET IMPLEMENTED
/// ===================
/// 
/// File containing DummyClassifier class, 
/// as well as its methods.
/// This is a child of the Trainer abstract Class.
///
/// @author Nicolas Masquieto
/// @date 2023-04-15

#pragma once

#include "Trainer.h"

/// @brief A Dummy machine learning algorithm
/// 
/// This class is dummy class that models 
/// a class that is used to train and predict
/// the orientation from a phone's 
/// 3-D gavity vector data.
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15
class DummyClassifier : public Trainer
{
public:
	/// @brief displays method name
	/// 
	/// @param not implemented
	/// @author Nicolas Masquieto
	/// @date 2023-04-15
	void train(std::string filename) override;
	/// @brief displays method name
	/// 
	/// @param not implemented
	/// @author Nicolas Masquieto
	/// @date 2023-04-15
	void readWorkingFile(std::string filename) override;
	/// @brief displays method name
	/// 
	/// @param not implemented
	/// @author Nicolas Masquieto
	/// @date 2023-04-15
	void predict(std::string filename) override;

	/// @brief displays method name
	/// 
	/// @param not implemented
	/// @author Nicolas Masquieto
	/// @date 2023-04-15
	void warning();
};