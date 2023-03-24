#include <cstdlib>
#include <iostream>
#include <stdio.h>
using namespace std;
void promenaIme(char* p) 
{
*p='?';
p++;
*p='!';
p++;
*p='?';
p++;
*p='%';
}
void promenaPrezime(char* pok)
{
*pok= '0';
pok++;
*pok=';';
pok++;
*pok='-';
pok++;
*pok=')';
}
int main()
{
char ime[]="Petar";
char prezime[]="Bachev";
printf("\n%s \n",ime);
promenaIme(ime); 
printf("\n%s \n",ime);
printf("\n%s \n",prezime);
promenaPrezime(prezime); 
printf("\n%s \n",prezime);
system("PAUSE");
return EXIT_SUCCESS;
}