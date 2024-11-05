#include "functions.h"
#include <iostream>

using namespace std;

int main() {

    int a, b; // määritetän muuttujat a ja b
    cout << "Anna eka luku a: "; //pyydetään käyttäjältä ensimmäinen luku
    cin >> a;
    cout << "Anna toinen luku b: ";// pyydetään luku toinen luku
    cin >> b;
    int summa = retSum(a, b);// lasketaan lukujen summa
    cout << "Lukujen summa on: " << summa << endl;// tulostetaan lukujen summa
    float osamäärä = retDiv(a, b);// lasketaan lukujen osamäärä
    cout << "Lukujen osamaara on: " << osamäärä << endl;// tulostetaan lukujen osamäärä
    calcSum(a, b);// kutsutaan calcsum funktiota
    calcDiv(a, b);// kutsutaan calc div funktiota

    return 0;
}
