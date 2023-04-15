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
        int i = 0;
        while (std::getline(fin, line)) {
            std::istringstream lineAsStream(line);
            std::getline(lineAsStream, param, ',');
            this->trained[i].setX(atof(param.c_str()));
            std::getline(lineAsStream, param, ',');
            this->trained[i].setY(atof(param.c_str()));
            std::getline(lineAsStream, param, ',');
            this->trained[i].setZ(atof(param.c_str()));
            std::getline(lineAsStream, param, ',');
            this->trained[i].setLabel(atoi(param.c_str()));
            i++;
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
        int i = 0;
        while (std::getline(fin, line)) {
            std::istringstream lineAsStream(line);
            std::getline(lineAsStream, param, ',');
            this->working[i].setX(atof(param.c_str()));
            std::getline(lineAsStream, param, ',');
            this->working[i].setY(atof(param.c_str()));
            std::getline(lineAsStream, param, ',');
            this->working[i].setZ(atof(param.c_str()));
            i++;
        }

        fin.close();
    }
}

void NNClassifier::predict(std::string filename)
{
    this->readWorkingFile(filename);

    for (int i = 0; i < this->working.size(); i++)
        this->predict(this->working[i]);

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
