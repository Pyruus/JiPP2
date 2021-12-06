//
// Created by pyrus on 11/29/21.
//

#include "NoteDirector.h"


void NoteDirector::addNote(int type, string title) {
    if (type == 1){
        *Note newNote = TextNote(title);
        notesList.push_back(newNote);
    }

    else if (type == 2){

    }
}
