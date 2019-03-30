#include <iostream>
#include <cstdlib>
#include <ctime>
struct IAnimal{
    virtual void Oddycham()=0;
};
struct Ryba:public IAnimal{
    void Oddycham(){ std::cout<<"Oddycham skrzelami"<<std::endl; }
    void Plywam() { std::cout<<"Plywam"<<std::endl; }
};
struct Ssak:public IAnimal{
    void Oddycham(){ std::cout<<"Oddycham plucami"<<std::endl; }
    void Biegam() { std::cout<<"Biegam"<<std::endl; }
};
struct Ptak:public IAnimal{
    void Oddycham(){ std::cout<<"Oddycham plucami"<<std::endl; }
    void Latam() { std::cout<<"Latam"<<std::endl; }
};
IAnimal* StworzZwierze(){
    srand(static_cast<unsigned>(time(NULL)));
    switch(rand()%3){
        case 0: return new Ryba;
        case 1: return new Ssak;
        case 2: return new Ptak;
        default: return NULL;
    }
}
int main(){
    IAnimal* zwierze = StworzZwierze();
    if(Ssak* ssak = dynamic_cast<Ssak*>(zwierze))
        ssak->Biegam();
    else
        std::cout << "Wylosowane zwierze nie jest ssakiem" << std::endl;
return 0;
}
