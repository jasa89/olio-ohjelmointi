#include <iostream>
#include "car.h"

using namespace std;

int main()
{

   Car objCar;

    objCar.setBrand("Toyota");
    objCar.setModel("Corolla");
    objCar.setYearmodel(2020);

    objCar.printData();

    return 0;
}
