#include "car.h"
#include "rectangle.h"
#include "student.h"
#include <iostream>
#include <memory>
using namespace std;

int main() {

    Car objCar;

    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setYearmodel(2020);

    objCar.printData();

    Rectangle *rect = new Rectangle(5, 10); // luodaan olio kekomuistiin

    // Tulostetaan pinta-ala
    std::cout << "Suorakulmion pinta-ala: " << rect->getArea() << std::endl;

    std::cout << "Suorakulmion ymparysmitta: " << rect->getCircum()
              << std::endl; // Tulostetaan ympärysmitta

    delete rect; // Vapautetaan kekomuisti

    std::shared_ptr<Student> studentPtr =
        std::make_shared<Student>(); // luodaan student olio smart pointerilla.

    // Asetetaan opiskelijan tiedot
    studentPtr->setName("Kalle Kaikkonen");
    studentPtr->setStudentNumber(12345);
    studentPtr->setAverage(3);

    // Tulostetaan opiskelijan tiedot
    std::cout << "Opiskelijan nimi: " << studentPtr->getName() << std::endl;
    std::cout << "Opiskelijanumero: " << studentPtr->getStudentNumber()
              << std::endl;
    std::cout << "Keskiarvo: " << studentPtr->getAverage() << std::endl;

    return 0;
}
