#include <iostream>
#include <vector>
using std::cout;
using std::endl;
/*using std::ostream;


template <typename T> class vector : public std::vector<T>{
public:
    vector<T>& operator=(const vector<int>& vec){
        vector<T>::clear();
        for(int i=0; i!=vec.size(); i++)
            vector<T>::push_back(vec[i]);
    }
    friend ostream& operator<<(ostream& out, const vector<T>& vec){
        for(int i=0; i!=vec.size(); i++)
            out << vec[i] << ", ";
        return out;
    }
};
*/

template <typename T>
class vector : public std::vector<T>
{
public:
    vector<T>& operator=(const vector<int> &vec)
    {
        this->clear();
        vector<int>::const_iterator it;
        for(it=vec.begin();it<vec.end();++it)
            this->push_back(*it);
    }

    friend std::ostream& operator<<(std::ostream &o, const vector<T> &vec)
    {
        typename vector<T>::const_iterator it;
        for(it=vec.begin();it<vec.end()-1;++it)
            o<<*it<<", ";
        o<<*it;
        return o;
    }
};


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
