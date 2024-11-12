#include <iostream>
#include "car.h"
#include "rectangle.h"
using namespace std;

int main()
{


    Car objCar;

    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setYearmodel(2020);

    objCar.printData();


    Rectangle* rect = new Rectangle(5, 10); // luodaan olio kekomuistiin

    // Tulostetaan pinta-ala
    std::cout << "Suorakulmion pinta-ala: " << rect->getArea() << std::endl;

    std::cout << "Suorakulmion ymparysmitta: " << rect->getCircum() << std::endl;// Tulostetaan ympärysmitta


    delete rect;  // Vapautetaan kekomuisti


    return 0;
}
