/// @file DummyClassifier.h
/// @brief Implementation for DummyClassifier class
/// 
/// As the class in not yet implemented, methods
/// comprise of simple text displaying
///
/// @author Nicolas Masquieto
/// @date 2023-04-15

#include "DummyClassifier.h"


void DummyClassifier::train(std::string filename)
{
	std::cout << "DummyClassifier train() function called." << std::endl;
}

void DummyClassifier::readWorkingFile(std::string filename)
{
	std::cout << "DummyClassifier readWorkingFile() function called." << std::endl;
}

void DummyClassifier::predict(std::string filename)
{
	std::cout << "DummyClassifier predict() function called." << std::endl;
}

void DummyClassifier::warning()
{
	std::cout << "DummyClassifier not yet implemented." << std::endl;
}