#include <iostream>


template <typename T>
class dyn_tab
{
public:
	dyn_tab(int roz1):roz(roz1), tab(new T[roz1]){};
	~dyn_tab()
	{
		delete [] tab;
	};
	T& max()const;


private:
	T *tab;
	int roz;

};

template <typename T>
T& dyn_tab<T>::max()const
{
		T temp = tab[0];
		for(int i=0; i<roz; i++)
		{
			if(tab[i] > temp)
			{
				temp = tab[i];
			}
		}
		return temp;
	};


int main()
{
	//char* const pointer;
	//int (*tab[5])(char,int*);

	return 0;
}