#include "Main.h"
#include <iostream>

LISTA::Lista()
{
	l.next=this;
}

LISTA::Lista(int Num)
{
	l.Content=Num;
}

LISTA::Lista(* int tab, int i_tab)
{
	l.Content=*(tab);
	list * tmp = l.next;
	l.next=NULL;
	for (int i = 1; i<i_tab; i++)
	{	
		l= new list;
		l.Content=(*tab+i);
		l.next =tmp;
		tmp=l;
	}
}

list LISTA::*koniec()
{
	Lista::Iterator peak = new list;
	return Lista::Iterator peak;
}

list LISTA::*poczatek()
{
	Lista::Iterator peak = new list;
	list * tmp = l;
	while (tmp!==NULL)
	{	
		peak = tmp;
		tmp = tmp.next	
	}
	return tmp2;
}

std::ostream & << (string & str, Lista & li) 
{
	str<<" ";
	return str;
}
std::ostream & << (string & str, list & l2) 
{
	str<<" ";
	return str;
}