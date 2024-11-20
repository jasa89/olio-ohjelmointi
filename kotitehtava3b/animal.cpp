#include "animal.h"
#include <iostream>

using namespace std;

Animal::Animal() { cout << "Luodaan animal olio" << endl; }

Animal::~Animal() { cout << "tuhotaan animal olio" << endl; }

void Animal::callOut() { cout << "Elain aantelee." << endl; }
