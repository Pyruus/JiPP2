//
// Created by pyrus on 11/29/21.
//

#ifndef LAB8_NOTE_H
#define LAB8_NOTE_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Note {
protected:
    string title;

public:
    Note(string title);

    string getTitle();

    void setTitle(string);

    virtual string getContent() = 0;

    virtual void setContent(string) = 0;
};


#endif //LAB8_NOTE_H
