#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std;

template<typename T>
ostream& operator<<(ostream& os,const vector<T> & vec)
{
	for (int i=0; i<vec.size(); ++i)
		os << vec[i] << ", ";
	//for (typename vector<T>::iterator it = vec.begin(); it!=vec.end(); ++it)
	//	os << *it << ", ";
	return os;
}


int main()
{
	vector<int> veci;
	vector<double> vecd;
	for(int i = 0;i<10;++i)
  	{
		veci.push_back(i);
		vecd.push_back(i);
	}
  //vecd = veci;
  cout << veci << endl << vecd << endl;
  cout << count_if(veci.begin(), veci.end(), not1(bind2nd( modulus<int>(), 2)) ) << endl; //liczy wszystkie liczby nieparzyste
}

//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,
//0, 1, 2, 3, 4, 5, 6, 7, 8, 9,

