//
// Created by pyrus on 10/25/21.
//

#ifndef JIPP_MYFIRSTCLASS_H
#define JIPP_MYFIRSTCLASS_H

#include <iostream>

using namespace std;

class MyFirstClass {
private:
    string firstName;
    string secondName;
    string question = "No question";
    string answer;
    short points;

    void readAnswer();

public:
    MyFirstClass(string firstName, string secondName, string question, short points);

    void printQuestion();

    void askUser();

    string getQuestion();

    void setPoints(short points);
};


#endif //JIPP_MYFIRSTCLASS_H
