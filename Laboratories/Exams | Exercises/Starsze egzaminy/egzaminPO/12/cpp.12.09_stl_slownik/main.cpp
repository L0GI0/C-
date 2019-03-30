/////////////////////////////////////////////////////////////////////////
/// \file
/// \author Bartosz Mindur
/// \author mindur@fatcat.ftj.agh.edu.pl
/// \version 0.1
/// \date 22-12-2004
/// \brief STL. Dictionary (multimap).
/////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <algorithm>
#include "stl_print.h"

/////////////////////////////////////////////////////////////////////////
	
using namespace std;
using OOP::stl_print_el;

/////////////////////////////////////////////////////////////////////////
int main(int argc, char** argv)
{
	typedef multimap<string,string> StrStrMMap;

  StrStrMMap dict;

  dict.insert(make_pair("day","dzien"));
  dict.insert(make_pair("strange","dziwny"));
  dict.insert(make_pair("car","auto"));
  dict.insert(make_pair("smart","elegancki"));
  dict.insert(make_pair("trait","cecha"));
  dict.insert(make_pair("strange","obcy"));
  dict.insert(make_pair("smart","bystry"));
  dict.insert(make_pair("smart","sprytny"));
  dict.insert(make_pair("clever","sprytny"));

  StrStrMMap::iterator pos;

	cout.setf(ios::left);
  cout << ' ' << setw(10) << "english " << "polish " << endl;
  
	cout << setfill('-') << setw(20) << ""  << setfill(' ') << endl;

  for(pos = dict.begin(); pos != dict.end(); ++pos) 
    cout << ' ' <<  setw(10) << pos->first << pos->second << endl;

  cout << endl;

	// wypisz wszystkie s³owa smart, wydajne
  string word("smart");
  cout << word << ": " << endl;

  for(pos = dict.lower_bound(word); pos != dict.upper_bound(word); ++pos) 
	  cout << "  " << pos->second << endl;

  // wypisz wszystkie s³owa sprytny, malowydajne
  word = ("sprytny");
  cout << '\n' << word << ": " << endl;
  for (pos = dict.begin(); pos != dict.end(); ++pos) 
    if (pos->second == word)
      cout << "  " << pos->first << endl;
}
