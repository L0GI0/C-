1. Napisz czy kod jest poprawny. Ile razy uruchomi się konstruktor T?
int main()
{
set<T, T::op> s(10); // 1 niepoprawny nie ma takiego konstuktora dla zbioru 
/// reszta ponizej poprawna
vector<T> v; // 2 // inicjalizuje wektor, nie wywola konstruktora
v.reserve(10); // 3 // rezerwuje pamiec dla wektora nie wywola konstuktorw 
T t[10]; // 4 // tutaj wywolaja sie konstruktory kontenera vector, a dokladnie 10
}