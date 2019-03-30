#pragma once

#include <map>
/// Typowanie mapy przechowujacej pare string i int
typedef std::map<std::string, int> map_type;

/// Typowanie mapy przechowujacej pare string i map_type
typedef std::map<std::string, map_type> Persons;

/**
*	Struktura do sortowania alfabetycznie odwrotnie
*/
struct ReverseOrder {
	bool operator () (const std::string& s1, const std::string& s2) {
		return s1 > s2;
	}
};

/**
*	Typowanie mapy przechowujacej pare string 
*	i map_type, do ulozenia elementu sluzy struktura 
*	ReverseOrder
*/
typedef std::map<std::string, map_type, ReverseOrder> PersonsReverse;

/**
*	Funkcja sluzaca do tworzenia mapy posortowanej wg 
*	nazwiska na podstawie kopiowanej mapy
*	\param basedOn Bazowa mapa
*	\return Mapa posortowana wg nazwiska
*/
template <typename BaseType>
inline BaseType MakeLastName(const BaseType& basedOn) {
	BaseType map;

	for (auto firstName=basedOn.begin(); firstName!=basedOn.end(); ++firstName)
    	for (auto lastName=firstName->second.begin(); lastName!=firstName->second.end(); ++lastName)
   			map[lastName->first][firstName->first] = lastName->second;


	return map;
}

/**
*	Funkcja sluzaca do wypisywania mapy posortowanej wg 
*	nazwiska 
*	\param toPrint Wypisywana mapa
*/
template <typename PrintType>
inline void PrintLastName (const PrintType& toPrint)
{
  	for (auto firstName=toPrint.begin(); firstName!=toPrint.end(); ++firstName)
    	for (auto lastName=firstName->second.begin(); lastName!=firstName->second.end(); ++lastName)
      		std::cout<<lastName->first<<" "<<firstName->first<<": "<<lastName->second<<"\n";
}

/**
*	Funkcja sluzaca do pobrania informacji 
*	wylacznie o ocenach osob
*	\param copy Mapa z informacjami o osobach
*	\return Tablica z informacjami o ocenach
*/
inline int* CopyOnlyRating(const Persons& copy) {
	int* returnedTable = new int[copy.size()+1];
	int i = 0;
	for (auto firstName=copy.begin(); firstName!=copy.end(); ++firstName)
    	for (auto lastName=firstName->second.begin(); lastName!=firstName->second.end(); ++lastName)
      		returnedTable[i++] = lastName->second;
    return returnedTable;
}