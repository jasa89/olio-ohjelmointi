#include "myclass.h"
#include "qcoreapplication.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    QCoreApplication a(argc, argv);

    MyClass myClass;         // my class olio
    myClass.raiseMySignal(); // kutsutaan raise mysignal metodia

    return a.exec();
}
