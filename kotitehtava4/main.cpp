#include "car.h"
#include <iostream>

using namespace std;

int main() {

    Car toyota("Toyota", "Corolla");

    toyota.setEngine();
    toyota.setWheels();

    toyota.printDetails();
}
