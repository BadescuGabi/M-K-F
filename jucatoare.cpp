//
// Created by Gabi on 15.04.2020.
//
#include <iostream>
#include "jucatoare.h"
#include <algorithm>
#include <vector>

map<string, int> jucatoare::kill{{"Robert", 0}, {"Balmus", 0}, {"Gabri", 0}, {"Neacsu", 0}, {"Bobo", 0}, {"Pana", 0},
                                 {"Misu", 0},{ "Lazar", 0 }, { "Victor", 0 }, { "Adelin", 0 },
        { "Octav", 0 },{ "Cata Ciucas", 0 }, { "Tony porcu", 0 }, { "Turcu", 0 }, { "Son", 0 },{ "Dinca", 0 }, { "Badita profu de sport", 0 },
        { "Victor Cata", 0 }, { "Tedy", 0 }, { "Dorian the Poop", 0 }, { "Ivascu Vlad", 0 }, { "Nitulescu", 0 }, { "Rosescu", 0 },
        { "Cosmin Chitescu", 0 }, { "Denis", 0 }, { "Adrian Dumitru Original", 0 }, { "Condu", 0 }, { "Stefan Dumitrescu", 0 },
        { "Chiri Tiganu", 0 }, { "Razvanel", 0 }, { "Stefan Nastase", 0 }, { "Tibi Din", 0 }, { "Tomy Costache", 0 }, { "Vlad Craciun", 0 },
        { "Bene", 0 }, { "Piscu", 0 }, { "Dani Sandu", 0 }, { "Andrei Mace", 0 }, { "Casi", 0 }, { "Domnu Mak", 0 },
        { "Dulica", 0 }, { "Tanasie", 0 }, { "Selly", 0 }, { "Tiby Matei", 0 }, { "Nicolas", 0 }};


map<string, int> jucatoare::fuck{{"Robert", 0}, {"Balmus", 0}, {"Gabri", 0}, {"Neacsu", 0}, {"Bobo", 0}, {"Pana", 0},
                                 {"Misu", 0},{ "Lazar", 0 }, { "Victor", 0 }, { "Adelin", 0 },
        { "Octav", 0 },{ "Cata Ciucas", 0 }, { "Tony porcu", 0 }, { "Turcu", 0 }, { "Son", 0 },{ "Dinca", 0 }, { "Badita profu de sport", 0 },
        { "Victor Cata", 0 }, { "Tedy", 0 }, { "Dorian the Poop", 0 }, { "Ivascu Vlad", 0 }, { "Nitulescu", 0 }, { "Rosescu", 0 },
        { "Cosmin Chitescu", 0 }, { "Denis", 0 }, { "Adrian Dumitru Original", 0 }, { "Condu", 0 }, { "Stefan Dumitrescu", 0 },
        { "Chiri Tiganu", 0 }, { "Razvanel", 0 }, { "Stefan Nastase", 0 }, { "Tibi Din", 0 }, { "Tomy Costache", 0 }, { "Vlad Craciun", 0 },
        { "Bene", 0 } ,{ "Piscu", 0 }, { "Dani Sandu", 0 }, { "Andrei Mace", 0 }, { "Casi", 0 }, { "Domnu Mak", 0 },
        { "Dulica", 0 }, { "Tanasie", 0 }, { "Selly", 0 }, { "Tiby Matei", 0 }, { "Nicolas", 0 }};

map<string, int> jucatoare::marry{{"Robert", 0}, {"Balmus", 0}, {"Gabri", 0}, {"Neacsu", 0}, {"Bobo", 0}, {"Pana", 0},
                                 {"Misu", 0},{ "Lazar", 0 }, { "Victor", 0 }, { "Adelin", 0 },
        { "Octav", 0 },{ "Cata Ciucas", 0 }, { "Tony porcu", 0 }, { "Turcu", 0 }, { "Son", 0 },{ "Dinca", 0 }, { "Badita profu de sport", 0 },
        { "Victor Cata", 0 }, { "Tedy", 0 }, { "Dorian the Poop", 0 }, { "Ivascu Vlad", 0 }, { "Nitulescu", 0 }, { "Rosescu", 0 },
        { "Cosmin Chitescu", 0 }, { "Denis", 0 }, { "Adrian Dumitru Original", 0 }, { "Condu", 0 }, { "Stefan Dumitrescu", 0 },
        { "Chiri Tiganu", 0 }, { "Razvanel", 0 }, { "Stefan Nastase", 0 }, { "Tibi Din", 0 }, { "Tomy Costache", 0 }, { "Vlad Craciun", 0 },
        { "Bene", 0 }, { "Piscu", 0 }, { "Dani Sandu", 0 }, { "Andrei Mace", 0 }, { "Casi", 0 }, { "Domnu Mak", 0 },
        { "Dulica", 0 }, { "Tanasie", 0 }, { "Selly", 0 }, { "Tiby Matei", 0 }, { "Nicolas", 0 }};


string jucatoare::copie = "";
int jucatoare::pt_decizie = -1;

jucatoare::jucatoare(string s) {
    numele = s;
    cout << numele << " a aderat" << endl;
}

jucatoare::~jucatoare() {
    baietii.clear();
}

const vector<string> &jucatoare::getBaietii() const {
    return baietii;
}

void jucatoare::setIndice() {
    int var = jucatoare::indice;
    var--;
    jucatoare::indice = var;
}

