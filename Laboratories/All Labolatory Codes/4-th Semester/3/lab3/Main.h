#ifndef __MAIN_H__
#define __MAIN_H__


#include <iostream>

struct list
{
	int Content;
	list * next;
};




class Lista
{
	private:
		list * l;
		
	
	public:
		
		class Iterator
		{
			public: 
				
				list * peak;		
		};
		
		Lista();
		Lista(int Num);
		Lista(int * tab, int i_tab);
		list * koniec();
		list * poczatek();
		
		
		Lista operator + (int number)
		{
			list * tmp = l;
			l = new list;
			l->next=tmp;
			l->Content = number;		
		}
		
		Lista & operator + (Lista & li2)
		{
			list * tmp = l;
			l = new list;
			l->next=li2.poczatek();		
		}
		
		Lista & operator += (int Num)
		{
			list * tmp = l;
			l = new list;
			l->next=tmp;
			l->Content = number;	
			return *this;	
		}
		
		Lista & operator [] (int i)
		{
			return *l.Content;		
		}
		
		friend std::ostream & << (std::ostream & str, Lista & li) ;
		frined std::ostream & << (std::ostream & str, list & l2) ;
};

#endif 