/// @file Source.cpp
/// @brief main program file where program begins
///
/// A program that uses machine learning algorithm
/// to calculate phone orientation according
/// to coordinates given from a file.
///
/// @author Nicolas Masquieto
/// @date 2023-04-14

#include "DummyClassifier.h"
#include "KNNClassifier.h"
#include "NNClassifier.h"

#define TRAININGDATA_FILENAME "trainingData.txt"
#define TESTINGDATA_FILENAME "testingData.txt"
#define UNKOWNDATA_FILENAME "unknownData.txt"

int main(void) {

    bool continueProgram = true;
    while (continueProgram) {
        std::cout << "Choose your classifier type:" << std::endl
            << "1. Dummy Classifier" << std::endl
            << "2. KNN Classifier" << std::endl
            << "3. NN Classifier" << std::endl
            << "0. Quit" << std::endl;

        int menuInput = -1;
        std::cin >> menuInput;
        switch (menuInput) {
        case 1: {
            DummyClassifier dummy;
            dummy.warning();
            dummy.train("dummy filename");
            dummy.predict("dummy filename");
            break; }
        case 2: {
            KNNClassifier knn;
            knn.warning();
            knn.train("dummy filename");
            knn.predict("dummy filename");
            break; }
        case 3: {
            NNClassifier nnClassifier;
            nnClassifier.train(TRAININGDATA_FILENAME);

            std::cout << std::endl << "1. Enter single sample data (x,y,z)" << std::endl
                << "2. Enter file by name" << std::endl
                << "0. Back" << std::endl;

            std::cin >> menuInput;
            switch (menuInput) {
            case 1: {
                Orientation inputOrientation;
                inputOrientation.inputCoordinates();

                nnClassifier.predict(inputOrientation);

                std::cout << inputOrientation << std::endl;

                break; }
            case 2: {
                std::cout << "Input filename to be read: " << std::endl;
                std::string filename;
                std::cin >> filename;

                nnClassifier.predict(filename);

                break; }
            case 0:
                break;
            default:
                std::cout << "Invalid input." << std::endl;
                break;
            }
            break; }
        case 0:
            continueProgram = false;
            break;
        default:
            std::cout << "Invalid input." << std::endl;
            break;
        }
    }

	return 0;
}