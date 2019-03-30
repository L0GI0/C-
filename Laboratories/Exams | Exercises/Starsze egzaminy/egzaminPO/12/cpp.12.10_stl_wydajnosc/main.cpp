/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Map.
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <string>
#include <set>
#include <vector>
#include <algorithm>
#include <time.h>

//#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;
//using OOP::stl_print_el;

typedef vector<const char*> DicVec;
typedef multiset<const char*> DicSet;

void DicSetTime();
void DicVecTime();

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	char choice;

	if(argc < 2)
	{
		cout << "Podaj Set, Vec [1,2]\n";
		cin >> choice;
	}
	else
		choice = argv[1][0];
  
	switch(choice)
	{
	case '1':
		DicSetTime();
		break;

	case '2':
		DicVecTime();
		break;
	}
}
/////////////////////////////////////////////////////////////////////////
void DicSetTime()
{
	DicSet dic2;
	clock_t start, finish;
	char word[50];
	ifstream DicFile;

		start = clock();
		
		for(int j = 0; j < 10; ++j)
		{
			DicFile.open("../_data_files/pl_rand.dic");
			while(DicFile)
			{
				DicFile.getline(word, 50);
				dic2.insert(word);		
			}
			DicFile.clear(ios::goodbit);
			DicFile.close();
		}

		for(int i = 0; i < 10000; ++i)
			dic2.find("mama");
		
		finish = clock();

		cout << "DicSet elem = " << dic2.size() << endl;
		cout << "DicSet time = " << ((double)(finish - start))/CLOCKS_PER_SEC;	
}

/////////////////////////////////////////////////////////////////////////
void DicVecTime()
{
	DicVec dic2;
	clock_t start, finish;
	char word[50];
	ifstream DicFile;

		start = clock();

		for(int j = 0; j < 10; ++j)
		{
			DicFile.open("../_data_files/pl_rand.dic");
			while(DicFile)
			{
				DicFile.getline(word, 50);
				dic2.push_back((word));		
			}
			DicFile.clear(ios::goodbit);
			DicFile.close();
		}

		sort(dic2.begin(), dic2.end());

		for(int i = 0; i < 10000; ++i)
			binary_search(dic2.begin(), dic2.end(), "mama");
		
		finish = clock();
		
		cout << "DicVec elem = " << dic2.size() << endl;
		cout << "DicVec time = " << ((double)(finish - start))/CLOCKS_PER_SEC;	
}
