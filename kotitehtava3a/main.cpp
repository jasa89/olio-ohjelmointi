#include "chef.h"
#include "italianchef.h"
#include <iostream>

using namespace std;

int main() {

    Chef objectChef("Gordon Ramsay");

    ItalianChef objItalianChef("Anthony Bourdain");

    objectChef.makeSalad(); // kutsutaan metodeita makeSalad ja makeSoup
    objectChef.makeSoup();

    objItalianChef.makeSalad();
    objItalianChef.makeSoup();
    objItalianChef.makePasta();
    objItalianChef.getName();

    return 0;
}
