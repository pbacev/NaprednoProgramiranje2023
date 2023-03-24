#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(int argc, char *argv[]) {
    char pesna[100] = "Kao led se istopim- Mira Skoric";
    char* p;
    p = &pesna[0];
    int counter = 0;
    cout<<"Pesna: "<<pesna<<endl;
    cout<<"Cela sodrzina- p:"<<p<<endl;
    cout<<"Pocetna pozicija- *p: "<<*p<<endl;
    cout<<"Adresa na pocetok: "<<&p<<endl;
    while(*p != '-'){
        counter++;
        *p ++;
    }
    *p++;
    cout<<"Premestuvanje do ime na izveduvach: "<<counter<<endl;
    cout<<"Sodrzina po premesten pocetok: "<<p<<endl;
    cout<<"Adresa od koja pocnuva segashna sodrzina: "<<&p<<endl;
}