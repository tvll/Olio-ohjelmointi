#include "exampleclass.h"

ExampleClass::ExampleClass(QObject* parent) : QObject(parent) {
    qDebug() << "Start";
    connect(this, &ExampleClass::readyToSay, this, &ExampleClass::sayHelloSlot);
    qDebug() << "End";
}

void
