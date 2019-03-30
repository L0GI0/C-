#include <stdlib.h>
#include <stdio.h>
#include <string.h>
using namespace std;

#define rozmiarCiagu int
#define ciag float*
//typedef float (*p[])(const float*, const int) operacja;
typedef float (*operacja)(const float*, const int);

float* InicjalizujCiagGeometryczny(int rozmiar, float iloraz1) {
	float wyraz=1;
	int i;
	float* tablica=(float*)malloc(sizeof(float)*rozmiar);
	*(tablica)=1;
	for(i=1; i<rozmiar; i++) {
		*(tablica+i)=wyraz*=iloraz1;
	}
	return tablica;
}

void Wypisz(const float* ciaggeo, const int rozmiar) {
	int i;
	printf("(");
	printf("1");
	for(i=1;i<rozmiar;i++) {
		printf(", %.0f", *(ciaggeo+i));
	}
	printf(")\n");
}

float Suma(const ciag ciaggeo, const int rozmiar) {
	int i;
	float Wynik = 1;
	for(i=1; i<rozmiar;i++)
		Wynik+=ciaggeo[i];
		
	return Wynik;
}

float Iloczyn(const ciag ciaggeo, const int rozmiar) {
	int i;
	float Wynik = 1;
	for(i=0; i<rozmiar;i++)
		Wynik*=ciaggeo[i];
		
	return Wynik;
}

float Max(const ciag ciaggeo, const int rozmiar) {
	float max=ciaggeo[0];
	int i;
	for (i=1; i<rozmiar; i++) {
		if (ciaggeo[i] > max)
			max = ciaggeo[i];
	}
	return max;
}

float Min(const ciag ciaggeo, const int rozmiar) {
	float min=ciaggeo[0];
	int i;
	for (i=1; i<rozmiar; i++) {
		if (ciaggeo[i] < min)
			min = ciaggeo[i];
	}
	return min;
}

void WykonajIWypisz (float (*p)(const ciag, const int), const ciag ciaggeo, const int rozmiar) {
	static int liczba=0;
	switch(liczba) {
		case 0:
			printf("suma: ");
			break;
		case 1:
			printf("iloczyn: ");
			break;
		case 2:
			printf("maksimum: ");
			break;
		case 3:
			printf("minimum: ");
			break;
	}
	printf("%.0f\n", p(ciaggeo, rozmiar));
	liczba++;
}

void UsunCiagi() {
	//free(geometryczny1);
	//free(geometryczny2);
}
