#include<iostream>
#include "jucatoare.h"
#include <vector>
using namespace std;

int main(){
    jucatoare Gabita("Gabita"),Ruxi("Ruxi"),Ioana("Ioana"),Alexia("Alexia");
    srand(time(0));
    cout<<"Sa inceapa jocu: ";
    string cuv="";
    int i=0;
    while(cuv!="gata"){
        cin.ignore();
        cout<<"Runda "<<++i;
        cin.ignore();
        cout<<"RUXI:";
        cin.ignore();
        Ruxi.joaca();
        cin.ignore();
        Ruxi.joaca();
        cin.ignore();
        Ruxi.joaca();
        cin.ignore();
        cout<<"GABITA:";
        cin.ignore();
        Gabita.joaca();
        cin.ignore();
        Gabita.joaca();
        cin.ignore();
        Gabita.joaca();
        cin.ignore();
        cout<<"IOANA:";
        cin.ignore();
        Ioana.joaca();
        cin.ignore();
        Ioana.joaca();
        cin.ignore();
        Ioana.joaca();
        cin.ignore();
        cout<<"ALEXIA:";
        cin.ignore();
        Alexia.joaca();
        cin.ignore();
        Alexia.joaca();
        cin.ignore();
        Alexia.joaca();
        cin.ignore();
        cout<<"mai jucam?"<<endl;
        cin>>cuv;
        cout<<endl;
    }
    Ruxi.afisare_fuck();
    cout<<endl;
    Ruxi.afisare_marry();
    cout<<endl;
    Ruxi.afisare_kill();
    cout<<endl;
}
