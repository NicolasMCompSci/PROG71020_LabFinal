/// @file KNNClassifier.h
/// @brief Definition of KNNClassifier class
/// 
/// ===================
/// NOT YET IMPLEMENTED
/// ===================
/// 
/// File containing KNNClassifier class, 
/// as well as its methods.
/// This is a child of the Trainer abstract Class.
///
/// @author Nicolas Masquieto
/// @date 2023-04-15

#pragma once

#include "Trainer.h"

/// @brief A K-Nearest Neighbour machine learning algorithm
/// 
/// This class is used to train and predict
/// the orientation from a phone's 
/// 3-D gavity vector data using the
/// k-nearest neighbour method.
/// 
/// @author Nicolas Masquieto
/// @date 2023-04-15
class KNNClassifier : public Trainer
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