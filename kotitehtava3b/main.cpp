#include "animal.h"
#include "dog.h"
#include <iostream>

using namespace std;

int main() {
    Animal objanimal; // luodaan oliot animal ja dog
    Dog objdog;
    objanimal.callOut(); // kutsutaan callout metodeja
    objdog.callOut();

    return 0;
}
