#ifndef CIAGI_H
#define CIAGI_H
#include <string>
struct Sequence{
	float firstElement;
	int length;
	float q;
};
static int count = 0;
std::string functionNames[] = {"suma", "iloczyn",  "max", "min"};
typedef Sequence *Ciag;
typedef int DlugoscCiagu ;
typedef float UzywanyTyp;
typedef float (*Funkcja)(Ciag, int);
float iloczynLiczb(Ciag sequence, int length);

float maximumLiczb(Ciag sequence, int length);

float minimumLiczb(Ciag sequence, int length);

Ciag utworzCiag(float, int, float);
void wypiszCiag(Ciag, int);
float badajCiag(float (*getSum)(Ciag, int) ,Ciag geo2,int rozmiar);
void zbadajIWypisz(float (*fun)(Ciag, int), Ciag geo1, int rozmiar);
char znakCiagu(Ciag geo2, int rozmiar);
void zniszczCiag(Ciag const *geo1);
float badajCiag(float (*getSum)(Ciag, int) , Ciag geo2, int rozmiar);
float sumaLiczb(Ciag Sequence, int length);

#endif