#include "functions.h"
#include <iostream>

using namespace std;

int main() {

    int a, b;
    cout << "Anna eka luku a: ";
    cin >> a;
    cout << "Anna toinen luku b: ";
    cin >> b;
    int summa = retSum(a, b);
    cout << "Lukujen summa on: " << summa << endl;
    float osamäärä = retDiv(a, b);
    cout << "Lukujen osamaara on: " << osamäärä << endl;
    calcSum(a, b);
    calcDiv(a, b);

    return 0;
}
