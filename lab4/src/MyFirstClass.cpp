//
// Created by pyrus on 10/25/21.
//

#include "MyFirstClass.h"

void MyFirstClass::readAnswer() {
    cin >> answer;
}

void MyFirstClass::printQuestion() {
    cout << question << endl;
}

void MyFirstClass::askUser() {
    printQuestion();
    readAnswer();
}

MyFirstClass::MyFirstClass(string firstName, string secondName, string question, short points)
: secondName(secondName), question(question), points(points)
{
    this->firstName = firstName;
}

string MyFirstClass::getQuestion() {
    return question;
}

void MyFirstClass::setPoints(short points) {
    this->points = points;
}

