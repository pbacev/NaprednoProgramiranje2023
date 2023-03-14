#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
   
   enum BrDen {
       ponedelnik,
       vtornik,
       sreda,
       cetvrtok,
       petok,
       sabota,
       nedela,
       celosen
   };
   
   BrDen brden = celosen;
   
   switch (brden) {
       case ponedelnik:
       cout<<"Raspored ponedelnik \n";
       break;
       case vtornik:
       cout<<"Raspored vtornik \n";
       break;
       case sreda:
       cout<<"Raspored sreda \n";
       break;
       case cetvrtok:
       cout<<"Raspored cetvrtok \n";
       break;
       case petok:
       cout<<"Raspored petok \n";
       break;
       case celosen:
       cout<<"Raspored celosen \n";
       break;
       case sabota:
       cout<<"sabota nema casovi \n";
       break;
       case nedela:
       cout<<"nedela nema casovi \n";
       break;
   } 
}
/*
Treba da se dodade rasporedot za sekoj den posebno.
imame enum podatok koj ima 8 promenlivi,za niv mozeme da gi ostavime defaultnite vrednosti ili da im zadademe dr vrednosti primer ponedelnik=1,
od niv vo switch birame za koj den sakame da ni se ispecati vrednostite koi gi sodrzi i taka dobivame raspored,za celosen treba da se ispecatat site denovi
*/