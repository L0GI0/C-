class A /* UZUPELNIJ 1 */ {};
class B /* UZUPELNIJ 2 */ {};
class X /* UZUPELNIJ 3 */ {};

int main() {try{X x; throw x}catch(X&){} }

2. Uzupełnij kod w podanym miejscu (liczba linii jest dowolna) tak, aby wypisywał dane podane w komentarzu:

/* UZUPELNIJ 1 */
int main() {
    std::string pi =
        test::conv<>::to(test::conv<int>::from("-1") + test::conv<>::from("4.14159"));
    std::cout << pi;
}
//Wynik działania programu (tylko linia poniżej):
//<3.14159>

3. Uzupełnij kod w podanym miejscu (liczba linii jest dowolna) tak, aby w kontenerach znajdowały sie podane w komentarzach wartości z zachowaniem kolejności. Odpowiedź uzasadnij.

/* UZUPEŁNIJ 1 */
int main() {
    set_of_strings norm; //Kontener STL set
    norm.insert("Ela"); norm.insert("Ola"); norm.insert("Ala");
    //norm zawiera: Ala, Ela, Ola
    set_of_strings rev(norm.begin(), norm.end(), cmp<std::string>::rev);
    //rev zawiera: Ola,Ela,Ala
    rev=norm; //norm i rev zawierają: Ala,Ela,Ola;
}


4. Określ poprawność poniższego kodu (błędny, poprawny, poprawny pod warunkiem że... itp). Uzasadnij.
Pochodna p = dynamic_cast<Pochodna>(baza); // niepoprawny, poneiwaz w dynamic cast, konwertujemy do wskaznika lub referencji

5. Określ poprawność poniższego kodu (błędny, poprawny, poprawny pod warunkiem że... itp). Uzasadnij.

stl_container s; //stl_container - typedef do poprawnego kontenera STL // o ile jest typedef poprawny to jest dobrze
s.insert(s.begin(), stl_container::value_type()); /// bledna
for(stl_container::const_iterator i= s.begin(); i< s.end(); ++i)
    *i; 
