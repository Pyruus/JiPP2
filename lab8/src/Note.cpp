//
// Created by pyrus on 11/29/21.
//

#include "Note.h"


string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}

Note::Note(string title) : title(title) {
}
