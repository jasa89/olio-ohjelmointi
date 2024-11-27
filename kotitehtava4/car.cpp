#include "car.h"
#include <iostream>

// Oletuskonstruktori
Car::Car()
    : objWheel1(), objWheel2(), objWheel3(), objWheel4(), model(""), brand("") {

}

// Parametrillinen konstruktori
Car::Car(const std::string &b, const std::string &m)
    : objWheel1(), objWheel2(), objWheel3(), objWheel4(), model(m), brand(b) {

}

// Moottorin asettaminen
void Car::setEngine() {
    objEngine.setHorsepower(150);
    objEngine.setDisplacement(2.0);
}

// Renkaiden asettaminen
void Car::setWheels() {
    objWheel1 = Wheel(17, "kesarengas");
    objWheel2 = Wheel(17, "kesarengas");
    objWheel3 = Wheel(17, "kesarengas");
    objWheel4 = Wheel(17, "kesarengas");
}

// Getterit ja setterit
std::string Car::getModel() const { return model; }
void Car::setModel(const std::string &m) { model = m; }

std::string Car::getBrand() const { return brand; }
void Car::setBrand(const std::string &b) { brand = b; }

// Tulostus
void Car::printDetails() const {
    std::cout << "Auto: " << model << " " << brand << " \n";

    std::cout << "Moottori: " << objEngine.getHorsepower() << " hp, "
              << objEngine.getDisplacement() << " L\n";
    std::cout << "  Rengas 1: " << objWheel1.getSize() << " tuumaa, "
              << objWheel1.getType() << "\n"
              << "  Rengas 2: " << objWheel2.getSize() << " tuumaa, "
              << objWheel2.getType() << "\n"
              << "  Rengas 3: " << objWheel3.getSize() << " tuumaa, "
              << objWheel3.getType() << "\n"
              << "  Rengas 4: " << objWheel4.getSize() << " tuumaa, "
              << objWheel4.getType() << "\n";
}
