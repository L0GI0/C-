template<typename T = double>
struct box{
	box(T val):a(val){};
	operator T()
	{
		return a;
	};
T a;
};


int main(){
box<> b1 = 3.14;
box<unsigned> b2 = 13;
double d = b1;
unsigned u = b2;
}