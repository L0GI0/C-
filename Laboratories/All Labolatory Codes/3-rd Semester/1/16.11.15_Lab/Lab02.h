#pragma once

#include<iostream>
#include<cstdlib>
#include<cstring>

void AddStudent(int*, char***, char ***, int **, const char*, const char*, const char*, const int);
void PrintListContent (const int numberOfStudents, char**& namesList);
void PrintListContent (const int numberOfStudents, int*& yearsList);
void PrintListContent (const int numberOfStudents, char**& namesList, char**& surnamesList, int*& yearsList);

void AddStudent(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList, const char* firstName, const char* secondName, const char* lastName, const int year) {

	char **oldNames = *namesList;
	*namesList = new char*[(*numberOfStudents)+1];
	char **oldSurnames = *surnamesList;
	*surnamesList = new char*[(*numberOfStudents)+1];
	int* oldYears = *yearsList;
	*yearsList = new int[(*numberOfStudents)+1];
	
	for (int i=0; i<*numberOfStudents; i++) {
		*(*namesList+i) = *(oldNames+i);
		*(*surnamesList+i) = *(oldSurnames+i);
		*(*yearsList+i) = *(oldYears+i);
	}
	delete[] oldNames;
	delete[] oldSurnames;
	delete[] oldYears;
	
	
	int nameLength = strlen(firstName)+strlen(secondName)+2; //Dlugosc stringa imie i drugie imie
	*(*namesList+(*numberOfStudents)) = new char[nameLength];
	strcpy(*(*namesList+(*numberOfStudents)), firstName);
	strcpy(*(*namesList+(*numberOfStudents))+strlen(firstName), " ");
	strcpy(*(*namesList+(*numberOfStudents))+strlen(firstName)+1, secondName);
	
	*(*surnamesList+(*numberOfStudents)) = new char[strlen(lastName)+1];
	strcpy(*(*surnamesList+(*numberOfStudents)), lastName);
	
	*(*yearsList+(*numberOfStudents)) = year;
	
	(*numberOfStudents)++; //Zwiekszamy ilosc studentow
}

void PrintListContent(const int numberOfStudents, char**& namesList) { //Wypisywanie listy po imionach/nazwiskach - funkcja obsluguje oba przypadki
	for (int i=0; i<numberOfStudents; i++) {
		std::cout << *(namesList+i) << std::endl;
	}
} 

void PrintListContent(const int numberOfStudents, int*& yearsList) { // Wypisywanie listy rocznikow
	for (int i=0; i<numberOfStudents; i++) {
		std::cout << *(yearsList+i) << std::endl;
	}
} 

void PrintListContent(const int numberOfStudents, char**& namesList, char**& surnamesList, int*& yearsList) { // wypisywanie listy ogolnej
	for (int i=0; i<numberOfStudents; i++) {
		std::cout << *(surnamesList+i) << ", " << *(namesList+i) << " - year " << *(yearsList+i) << std::endl;
	}
}

void ClearStudents(int* numberOfStudents, char*** namesList, char*** surnamesList, int** yearsList) {
	for (int i=0; i< *numberOfStudents; i++) {
		delete[] *(*namesList+i);
		delete[] *(*surnamesList+i);
	}
	delete[] *namesList;
	delete[] *surnamesList;
	delete[] *yearsList;
}

