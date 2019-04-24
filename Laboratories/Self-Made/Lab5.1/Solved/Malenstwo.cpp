#include "Malenstwo.h"

int Helpfull::m_counter = 0;
Malenstwo *Helpfull::m_tab = nullptr;


Malenstwo::Malenstwo(){}

Malenstwo::Malenstwo(int val)
    : m_val(val)
{
    std::cout << "Konstrukcja Malenstwa: wart = " << m_val << std::endl;
}

int& Malenstwo::wartosc(){
    return m_val;
}

void *Malenstwo::operator new[](size_t size){
    std::cout << "Alokuje tablice [] o rozmiarze " << size / sizeof(Malenstwo) - sizeof(size_t) << " (" << size <<  " bajtow)" << std::endl;
    Helpfull::m_counter += size/sizeof(Malenstwo);
    if(Helpfull::m_counter == 1){
        std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow" << std::endl;
        Helpfull::m_tab = ::new Malenstwo[100];
        return Helpfull::m_tab;
    } else {
        return Helpfull::m_tab + Helpfull::m_counter - size/sizeof(Malenstwo);
    }
}

void *Malenstwo::operator new(size_t size){
    std::cout << "Alokuje jeden obiekt: 1 (4 bajtow)" << std::endl;
    Helpfull::m_counter++;
    if(Helpfull::m_counter == 1){
        std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow" << std::endl;
        Helpfull::m_tab = ::new Malenstwo[100];
        return Helpfull::m_tab;
    } else {
        return Helpfull::m_tab + Helpfull::m_counter - 1;
    }
}

void Malenstwo::operator delete(void *objc, size_t size){
    std::cout << "Zwalniam jeden obiekt: 1 (4 bajtow)" << std::endl;
    Helpfull::m_counter--;
    if(Helpfull::m_counter == 0){
        ::delete[] Helpfull::m_tab;
    }
}


void Malenstwo::operator delete[](void *objc, size_t size){
    size_t p = Helpfull::m_tab + Helpfull::m_counter - static_cast<Malenstwo *>(objc);
    std::cout << "Zwalniam tablice [] o rozmiarze " << p - sizeof(size_t) << " (" << (p - 2) * sizeof(Malenstwo) << " bajtow)" << std::endl;
    Helpfull::m_counter -= size / sizeof(Malenstwo);
    if(Helpfull::m_counter == 0){
        ::delete[] Helpfull::m_tab;
    }
}


MalenstwoSamoSprzatacz::MalenstwoSamoSprzatacz(Malenstwo *mal)
    : m_mal(mal)
{}

MalenstwoSamoSprzatacz::~MalenstwoSamoSprzatacz(){
    delete m_mal;
}

Malenstwo* MalenstwoSamoSprzatacz::operator ->(){
    return m_mal;
}
