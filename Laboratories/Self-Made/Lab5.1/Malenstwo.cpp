#include "Malenstwo.h"

int MemoryManagment::_occupied = 0;
Malenstwo * MemoryManagment::_memory = nullptr;




Malenstwo::Malenstwo(int value):_value(value){

}

Malenstwo::Malenstwo(){
	
}



void * Malenstwo::operator new(size_t size){
	// Alokuje jeden obiekt: 1 (4 bajtow)
	std::cout << "Alokuje jeden obiekt: " << sizeof(Malenstwo) / size  - sizeof(size_t) << " (" << size <<  " bajtow)" << std::endl;
    
	if(MemoryManagment::_occupied == 0){
		std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow";
		MemoryManagment::_memory = ::new Malenstwo[100];
	}

	return &MemoryManagment::_memory[MemoryManagment::_occupied++];
}




void * Malenstwo::operator new[](size_t size){
	// Alokuje jeden obiekt: 1 (4 bajtow)
	int current = MemoryManagment::_occupied;
	MemoryManagment::_occupied += size / sizeof(Malenstwo);
	std::cout << "Alokuje jeden obiekt: " << sizeof(Malenstwo) / size  - sizeof(size_t) << " (" << size <<  " bajtow)" << std::endl;
    
	if(MemoryManagment::_occupied == 0){
		std::cout << "Pierwszy obiekt na stercie - prealokuje skladowisko na 100 elementow";
		MemoryManagment::_memory = ::new Malenstwo [100];
	}

	return &MemoryManagment::_memory[current];
}

