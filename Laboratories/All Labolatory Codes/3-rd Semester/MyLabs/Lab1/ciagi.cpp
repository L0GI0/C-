#include "ciagi.h"
#include <iostream>
#include <cstdlib>
using namespace std;
//liczy sume liczb calego ciagu
float sumaLiczb(Ciag Sequence, int length){
	int i;
	float sum = 0;
	float current = Sequence->firstElement;
	for(i = 1; i <= length; i++){
		sum+= current;
		current*=Sequence->q;
	}
	return sum;
}
// liczy iloczyn wszystkich elementow ciaug
float iloczynLiczb(Ciag sequence, int length){
	int i;
	float current = sequence->firstElement;
	float iloczyn = 1;
	for(i = 1; i <= length; i++){
		current *= sequence->q; 
		iloczyn*= current; 
	}
	return iloczyn;
}
//wypisuje elementy ciagu
void wypiszCiag(Ciag sequence, int length){
	int i;
	float current = sequence->firstElement;
	for(i = 1; i <= length; i++){
		cout << (int) current << " ";
		current *= sequence->q;
	}
	cout << endl;
}
//tworzy ciag allokujac pamiec dynamiczna dla struktury ciag 
Ciag utworzCiag(float pierwszy, int rozmiar , float iloraz){
	Ciag newSequence = (Ciag) malloc(sizeof(struct Sequence));// or malloc
	//newSequence = (Ciag){pierwszy, rozmiar, iloraz};
	newSequence->firstElement = pierwszy;
	newSequence->length = rozmiar;
	newSequence->q = iloraz;
	return newSequence;
}
//funckaj korzystajaca z ze wskaznikow na funckje obliczajaca odpowiednie wartosci 
float badajCiag(float (*getSum)(Ciag, int) , Ciag geo2, int rozmiar){
	float sum = getSum(geo2, rozmiar);
	return sum;
}

//funkcja "badajaca" nasze ciagi korzystajac z tablicy wskaznikow na funckje
void zbadajIWypisz(float (*fun)(Ciag, int), Ciag geo1, int rozmiar){
	cout << fun(geo1, rozmiar) << endl; // need to change
}
// dealokuje zajeta pamiec przez funckje "utworzCiag"
void zniszczCiag(Ciag const *geo1){
	free(*geo1);
}
// sprawdza znak Ciagu
char znakCiagu(Ciag geo2, int rozmiar){
	if(geo2->firstElement < 0 && geo2->q > 0)
		return '-';
	else if(geo2->firstElement > 0 && geo2->q > 0)
		return '+';
	else return '0';
}
//Odnajduje najwiekszy element ciagu 
float maximumLiczb(Ciag sequence, int length){
	float max = 0;
	int i;
	float current = sequence->firstElement;
	for(i = 1; i <= length; i++){
		if (max < current);
		current *= sequence->q;
	}
	return max;
}
//Odnajduje najmniejszy element ciagu
float minimumLiczb(Ciag sequence, int length){
	float min = 100000;
	int i;
	float current = sequence->firstElement;
	for(i = 1; i <=length; i++){
		if (min > current);
		current *= sequence->q;
	}
	return min;
}
