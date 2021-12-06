//
// Created by pyrus on 11/22/21.
//

#include <iostream>
#include "Note.h"
#include "TextNote.h"

using namespace std;

int main() {
    TextNote notatka = TextNote("Notatka1");
    cout << notatka.getTitle() << endl;
    cout << notatka.getContent() << endl;
    notatka.setContent("Siema");
    cout << notatka.getContent() << endl;

    return 0;
}