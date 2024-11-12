#ifndef CAR_H
#define CAR_H

#include <iostream>

using namespace std;

class Car {
public:
    Car();

    string getBrand() const;
    void setBrand(const string &newBrand);

    int getYearmodel() const;
    void setYearmodel(int newYearmodel);

    string getModel() const;
    void setModel(const string &newModel);

    void printData();

private:
    string brand;
    string model;
    int yearmodel;
};

#endif // CAR_H
