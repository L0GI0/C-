2. Napisz czy kod jest poprawny:
int main()
{
struct A { virtual void a(); static void s(); }; // 1 OK
struct B : public A { virtual void b(); }; // 2 OK
const A a; A& b = B(); // 3 poprawny pod warunkiem const przed A& b = B();
a.a(); // 4 niepoprawny metoda nie const
a.s(); // 5 poprawny
a.b(); // 6 niepoprawny, struktura a nie ma metody b()
b.a(); // 7 poprawny o ile const przed  A& b = B();
b.s(); // 8 poprawny
b.b(); // 9 o ile  const przed A& b = B(); to niepoprawny metoda nie-const
}