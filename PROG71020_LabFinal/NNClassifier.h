/// @file NNClassifier.h
/// @brief Definition of NNClassifier class
/// 
/// File containing NNClassifier class, 
/// as well as its methods.
/// This is a child of the Trainer abstract Class.
///
/// @author Nicolas Masquieto
/// @date 2023-04-15

#pragma once

#include "Trainer.h"

/// @brief A Nearest Neighbour machine learning algorithm
/// 
/// This class is used to train and predict
/// the orientation from a phone's 
/// 3-D gavity vector data using the nearest 
/// neighbour method.
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15
class NNClassifier: public Trainer
{
	std::vector<Orientation> trained;
	std::vector<Orientation> working;

public:
	/// @brief Trains the machine
    /// 
    /// @param file name as string
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
	void train(std::string filename) override;
    /// @brief Reads input data file
    /// 
    /// @param file name as string
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
	void readWorkingFile(std::string filename) override;

    /// @brief predicts orientation based on training
    /// 
    /// Prediction is done to a whole file and saved to another
    /// 
    /// @param file name as string
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
	void predict(std::string filename) override;
    /// @brief predicts orientation based on training
    /// 
    /// Prediction is done to one coordinate input
    /// then displayed to screen.
    /// 
    /// @param file name as string
    /// @author Nicolas Masquieto
    /// @date 2023-04-15
	void predict(Orientation &orientation);
};