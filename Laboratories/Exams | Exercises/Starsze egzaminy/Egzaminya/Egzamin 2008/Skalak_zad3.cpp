#include <vector>
#include <iostream>

template<typename T>
class vector:public std::vector<T>
{
public:
	template<typename S>
	vector<T>& operator=(const vector<S> &vect)
	{
		this->clear();
		typename std::vector<S>::const_iterator it = vect.begin();
		for(; it!=vect.end(); it++)
		{
			this->push_back(*it);
		};

		return *this;
	};
	friend std::ostream& operator<<(std::ostream &o, const vector<T> &vect)
	{
		typename std::vector<T>::const_iterator it = vect.begin();
		for(; it!=vect.end()-1; it++)
		{
			o << *it << ", ";
		};
		o <<*it;
		return o;
	};
private:

};

using std::cout;
using std::endl;

// uzupe³nij
int main(){
    vector<int> veci;
    vector<double> vecd;
    for(int i = 0;i<10;++i){
        veci.push_back(i);
        vecd.push_back(i);
    }
    vecd = veci;
    cout << veci << endl << vecd << endl;
}
//Program trzeba by³o uzupe³niæ lub zmodyfikowaæ tak, aby wyœwietla³:
//Kod:
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
