#include "italianchef.h"

// kutsutaan luokan chef muodostinta jossa on parametri
ItalianChef::ItalianChef(string n) : Chef(n) {

    cout << "ItalianChef " << n << " constructori" << endl;
}

// Metodi pastan valmistamiseksi
void ItalianChef::makePasta() {
    cout << "ItalianChef " << getName() << " makes pasta" << endl;
}

string ItalianChef::getName() const { return Chef::getName(); }

// ItalianChef-luokan destruktori
ItalianChef::~ItalianChef() {
    cout << "name of the Italian Chef is " << getName() << "" << endl;
    cout << "ItalianChef " << getName() << " destructori" << endl;
}
