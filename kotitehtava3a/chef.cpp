#include "chef.h"

Chef::Chef() { name = "Gordon Ramsay"; }

Chef::Chef(string n) {
    name = n;
  cout << "Chef " << name << " constructori" << endl;
}

void Chef::makeSalad() { cout << "Chef " << name << " makes salad" << endl; }

void Chef::makeSoup() { cout << "Chef " << name << " makes soup" << endl; }
Chef::~Chef() { cout << "Chef " << name << " destructori" << endl; }
string Chef::getName() const { return name; }
