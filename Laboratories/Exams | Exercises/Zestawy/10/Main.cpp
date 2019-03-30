#include <iostream>




int main()
{
int a;
void *wv ;
int *wi1, *wi2 ; //brak ;
float *wf ;
char *wc ;

wi1 = wi2;
wf = wi2 ; 
wf = (float *) wi1; 
wv = wf ; 
cout << *wf ;
cout << *wv ; // typ void*
wv = &wc;
wi1 = *a; // nieprawidlowy typ
wi1 = &a;
wf = wv; // nieprawidlowa konwersja z void* do float*
wi = (int *) wv;  // niezdeklarowane wi

	return 0;
}