#include "exampleclass.h"

ExampleClass::ExampleClass(QObject *parent) : QObject(parent) {
    qDebug() << "Start";

    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug() << "End";
}

void ExampleClass::startToWait() {
    QThread::msleep(1000); // Odottaa 1 sekunnin
    emit readyToSay();     // Emitoi readyToSay-signaalin
}

void ExampleClass::sayHelloSlot() {
    qDebug() << "Terve"; // Tulostaa "Terve"
}
