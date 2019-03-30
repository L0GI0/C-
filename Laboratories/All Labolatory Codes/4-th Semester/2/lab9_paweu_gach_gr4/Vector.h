#pragma once

/**
*	Klasa implementujaca kontener typu Vector
*/
class Vector {
public:
	/**
	*	Inicjalizacja kontenera o zadanej wielkosci
	*	\param size Rozmiar kontenera
	*/
	template <typename T>
	static void Initialise(const int size);

	/**
	*	Inicjalizacja kontenera o zadanej wielkosci i wypelnienie go
	*	\param size Rozmiar kontenera
	*	\param obj Obiekt wypelniajacy kontener
	*/
	template <typename T>
	static void Initialise(const int size, T obj);

	/**
	*	Zwrocenie elementu na konkretnej pozycji
	*	\param pos Pozycja zwracanego elementu
	*	\return Element ktory chcemy wyswietlic/nadpisac
	*/
	template <typename T>
	static T& At(const int pos);

	/**
	*	Wyczyszczenie kontenera
	*/
	template <typename T>
	static void Reset();

	/**
	*	Metoda zwracajaca rozmiar kontenera
	*	\return Rozmiar kontenera
	*/
	static int Size();
private:
	/// Rozmiar kontenera
	static int _size;

	/// Kontener przechowujacy obiekty
	static void* _tab;
};

int Vector::_size=0;
void* Vector::_tab = NULL;

template <typename T>
void Vector::Initialise(const int size) {
	Vector::_size = size;
	Vector::_tab = new T[size];
}

template <typename T>
void Vector::Initialise(const int size, T obj) {
	Vector::_size = size;
	Vector::_tab = new T[Vector::_size];
	T* tab = static_cast<T*>(Vector::_tab);
	for (int i = 0; i < Vector::_size; ++i) {
		tab[i] = obj;
	}
	Vector::_tab = tab;
}

template <typename T>
T& Vector::At(const int pos) {
	T* tab = static_cast<T*>(Vector::_tab);
	return tab[pos];
}

template <typename T>
void Vector::Reset() {
	T* tab = static_cast<T*>(Vector::_tab);
	if (tab != NULL)
		delete[] tab;
	Vector::_tab = NULL;
}

int Vector::Size() {
	return Vector::_size;
}