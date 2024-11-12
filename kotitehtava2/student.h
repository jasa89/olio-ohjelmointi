#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>

using namespace std;

class Student {
public:
    Student();

    string getName() const;
    void setName(const string &newName);

    int getStudentNumber() const;
    void setStudentNumber(int newStudentNumber);

    int getAverage() const;
    void setAverage(int newAverage);

private:
    string name;
    int studentNumber;
    int average;
};
#endif // STUDENT_H
