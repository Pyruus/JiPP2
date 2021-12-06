//
// Created by pyrus on 11/29/21.
//

#include "ListNote.h"

ListNote::ListNote(string title) : Note(title) {

}

void ListNote::setContent(string line) {
    content.push_back(line);
}
