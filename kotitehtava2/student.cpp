#include "student.h"

Student::Student() : name("Unknown"), studentNumber(0), average(0) {}

string Student::getName() const { return name; }

void Student::setName(const string &newName) { name = newName; }

int Student::getStudentNumber() const { return studentNumber; }

void Student::setStudentNumber(int newStudentNumber) {
    studentNumber = newStudentNumber;
}

int Student::getAverage() const { return average; }

void Student::setAverage(int newAverage) { average = newAverage; }
