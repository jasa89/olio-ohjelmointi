#include "car.h"
#include <iostream>
#include <vector>

using namespace std;

int main()

{

    vector<Car> carList; // luodaan vektori

    Car objCat_1 = Car("Volvo", "V80", 2020); // luodaan kolme car luokan oliota
    Car objCat_2 = Car("Audi", "a4", 2015);
    Car objCat_3 = Car("Honda", "ZR-V", 2022);

    // lisätään oliot listaan(vektoriin)
    carList.push_back(objCat_1);
    carList.push_back(objCat_2);
    carList.push_back(objCat_3);

    // tulostetaan listan toisen auton tiedot
    cout << "Toinen auto" << endl;
    carList[1].printData();

    cout << "Kaikki autot" << endl; // tulostetaan listan kaikki autot
    for (const Car &car : carList) {
        cout << "nimi=" << car.getBrand() << " malli=" << car.getModel()
             << " vuosimalli=" << car.getYearmodel() << endl;
    }

    return 0;
}
