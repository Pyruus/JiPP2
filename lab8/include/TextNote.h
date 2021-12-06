//
// Created by pyrus on 11/29/21.
//

#ifndef LAB8_TEXTNOTE_H
#define LAB8_TEXTNOTE_H

#include "Note.h"

class TextNote : public Note{
protected:
    string content;

public:
    TextNote(string title);

    string getContent();

    void setContent(string);
};


#endif //LAB8_TEXTNOTE_H
