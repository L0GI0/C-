#ifndef ROZDZIEL_H
#define ROZDZIEL_H

typedef struct Divider{
char *string;
char rozdzielacz;
}Rozdzielacz;

//Konstruuje nowa strukture korzystajac z stosu (pamieci dynamicnej)
Rozdzielacz skonstruuj(const char*, char );

//wypisuje zawartosc struktury nie zwaracajac wartosci
void wypisz(const Rozdzielacz *divider);

// kopiuje lanuch ze struktury do tablicy buffor 
void kopiuj( Rozdzielacz *r1, char *);

// sprawdza czy w pozostalym lancuchu wystepuje okreslony znak w strukturze 
int nastepny(Rozdzielacz *divider);


#endif 