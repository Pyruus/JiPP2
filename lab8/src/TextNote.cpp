//
// Created by pyrus on 11/29/21.
//

#include "TextNote.h"

TextNote::TextNote(string title) : Note(title) {

}

string TextNote::getContent() {
    return content;
}

void TextNote::setContent(string newContent) {
    this->content = newContent;
}
