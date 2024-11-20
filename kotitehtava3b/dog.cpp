#include "dog.h"

#include <iostream>
using namespace std;

Dog::Dog() { cout << "luodaan koira olio" << endl; }

Dog::~Dog() { cout << "tuhotaan koira olio" << endl; }

void Dog::callOut() { cout << "Koira haukkuu!" << endl; }
