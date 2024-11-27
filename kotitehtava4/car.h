#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <iostream>
using namespace std;

class Car {

private:
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    std::string model;
    std::string brand;

public:
    Car();

    Car(const std::string &b,
        const std::string &m); // Parametrillinen konstruktori

    void setEngine(); // Asettaa moottorin tiedot
    void setWheels(); // Asettaa kaikkien renkaiden tiedot

    std::string getModel() const;
    void setModel(const std::string &m);

    std::string getBrand() const;
    void setBrand(const std::string &b);

    void printDetails() const; // Tulostaa auton tiedot
};

#endif // CAR_H
