struct final;
struct fin
{
private:
	friend struct final;
	fin(){};
	~fin(){};
};
 
struct final:virtual public fin
{
	final(){};
	~final(){};
 
};
 
 
 
struct non_copyable
{
	non_copyable(){};
	~non_copyable(){};
 
private:
	non_copyable(const non_copyable &obj){};
	non_copyable& operator=(const non_copyable &obj){};
};
 
 
 
 
// uzupelnij
struct A : public final { };
struct B : public non_copyable { };
int main() {
final _final; // ok
//A _a; // blad
B _b; // ok
//B __b = _b; // blad
}