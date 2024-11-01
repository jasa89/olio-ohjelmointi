#include "functions.h"
void doubleNum(int value) { cout << "tuplattu luku on" << 2 * value << endl; }

void calcSum(int a, int b) {

    int summa = a + b;
    cout << "Lukujen summa on: " << summa << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: Nollalla jakaminen ei ole sallittua." << endl;
    } else {
        double osamäärä = static_cast<double>(a) / b;
        cout << "Lukujen osamaara on: " << osamäärä << endl;
    }
}

int retSum(int a, int b) { return a + b; }

float retDiv(int a, int b) {
    if (b == 0) {
        std::cout << "Virhe: Nollalla jakaminen ei ole sallittua." << std::endl;
        return 0.0f; // Palauttaa nollan
    }
    return static_cast<float>(a) / b;
}
