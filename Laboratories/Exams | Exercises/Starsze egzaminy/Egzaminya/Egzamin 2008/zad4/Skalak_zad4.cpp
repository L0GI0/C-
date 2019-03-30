#include <iostream>

    struct Baza1 {Baza1(){std::cout << "Baza1"<<std::endl;};};
    struct Baza2 {Baza2(){std::cout << "Baza2"<<std::endl;};};
    struct Baza3 {Baza3(){std::cout << "Baza3"<<std::endl;};};
    struct x: virtual public Baza1, public Baza2 {x(){std::cout << "x"<<std::endl;};};
    struct y: private Baza3, public x, virtual public  Baza1 {y(){std::cout << "y"<<std::endl;};};
     
    int main()
    {
    	y a;
    	//x vb;
    }
     

/* destruktory wywoływane sa w odwrotnej kolejnosci niz konstruktory ich wywolanie jest zalezne od zaleznosci pomiedzy poszczegolnymi klasami/strukturami */
//konstruktoryy: baza3, baza1, baza2, x, baza1, y
//destruktoryy:  y,baza1,x,baza2,baza1,baza3