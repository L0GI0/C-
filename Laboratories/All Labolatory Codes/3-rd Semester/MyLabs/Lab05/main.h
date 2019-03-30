#pragma once 
//Maciej Dworak & Michal Pabjan
//Klasa iminujaca objekt string wbudowany w jezyk C++

class MyString{
	public:
		//Kontruktor z jedna zmienna przyjmujaca podany string, zapisujacy go w objekcie, obliczajacy i przypisajacy dugosc do zmiennej
		MyString(const char *);
		//Metoda zwracajaca string zawarty w objekcie  
		char * c_str() const;
		//Metoda zwracajaca dlugosc z wartosci zmiennej 
		int length() const;
		//Metoda dodajaca string zawarty w przeslanym referencyjnie objekcie to tej metody 
		void append(const MyString & strObject);
		//Metoda zamiena string obiektu wywolujacego metoda ze stringiem podanym w argumencie funkcji
		void replace(const char *);
		//Metoda zamieniajaca stringi pomiedzy obiektem wywolujacym metode oraz obiektem przeslanym w argumencie funkcji  
		void swap(MyString & strObject);
		//Domyslny destruktor obiektow, zwalnia zajeta pamiec po wypisaniu usuwanego stringu 
		~MyString();
	private:
		//zmienna przechowujaca string
		char *str;
		//zmienna przechowujaca dlugosc stringu przypisanego do obiektu 
		int lenghtStr;
};