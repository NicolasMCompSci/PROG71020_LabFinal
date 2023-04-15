#include "NNClassifier.h"
#include <fstream>
#include <sstream>

#define SAVE_FILENAME "result.txt"

void NNClassifier::train(std::string filename)
{
    std::ifstream fin;
    fin.open(filename);

    std::string line;
    std::string param;
    if (fin.is_open()) {
        while (std::getline(fin, line)) {
            Orientation trainingOrientation;
            std::istringstream lineAsStream(line);

            std::getline(lineAsStream, param, ',');
            trainingOrientation.setX(atof(param.c_str()));

            std::getline(lineAsStream, param, ',');
            trainingOrientation.setY(atof(param.c_str()));

            std::getline(lineAsStream, param, ',');
            trainingOrientation.setZ(atof(param.c_str()));

            std::getline(lineAsStream, param, ',');
            trainingOrientation.setLabel(atoi(param.c_str()));

            this->trained.push_back(trainingOrientation);
        }

        fin.close();
    }
}

void NNClassifier::readWorkingFile(std::string filename)
{
    std::ifstream fin;
    fin.open(filename);

    std::string line;
    std::string param;
    if (fin.is_open()) {
        while (std::getline(fin, line)) {
            Orientation workingOrientation;
            std::istringstream lineAsStream(line);

            std::getline(lineAsStream, param, ',');
            workingOrientation.setX(atof(param.c_str()));

            std::getline(lineAsStream, param, ',');
            workingOrientation.setY(atof(param.c_str()));

            std::getline(lineAsStream, param, ',');
            workingOrientation.setZ(atof(param.c_str()));

            this->working.push_back(workingOrientation);
        }

        fin.close();
    }
}

void NNClassifier::predict(std::string filename)
{
    this->readWorkingFile(filename);

    for (int i = 0; i < this->working.size(); i++)
        this->predict(this->working[i]);

    std::ofstream fout;
    fout.open(SAVE_FILENAME);
    for (int i = 0; i < this->working.size(); i++)
        fout << this->working[i];
    fout.close();

	std::cout << "your results have been saved to " << SAVE_FILENAME << std::endl;
}

void NNClassifier::predict(Orientation &orientation)
{
    double minDistance = INFINITY;

    for (int i = 0; i < trained.size(); i++) {
        double distance = orientation.getDistanceFrom(trained[i]);
        if (distance < minDistance) {
            minDistance = distance;
            orientation.setLabel(trained[i].getLabel());
        }
    }
}
