//
// Created by pyrus on 11/29/21.
//

#ifndef LAB8_NOTEDIRECTOR_H
#define LAB8_NOTEDIRECTOR_H

#include "Note.h"
#include "TextNote.h"
#include "ListNote.h"

class NoteDirector {
protected:
    vector <Note> notesList;

public:
    void addNote(int type, string title);

    void deleteNote();

    void editNote();

    void clearNotesList();
};


#endif //LAB8_NOTEDIRECTOR_H
