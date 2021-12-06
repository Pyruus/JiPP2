//
// Created by pyrus on 11/29/21.
//

#ifndef LAB8_LISTNOTE_H
#define LAB8_LISTNOTE_H

#include "Note.h"

class ListNote : public Note{
protected:
    vector <string> content ;

public:
    ListNote(string title);

    string getContent();

    void setContent(string);
};


#endif //LAB8_LISTNOTE_H
