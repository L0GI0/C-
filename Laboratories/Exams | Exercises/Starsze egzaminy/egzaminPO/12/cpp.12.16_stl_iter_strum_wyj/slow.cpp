#include<iostream>
#include<string>
#include<algorithm>
#include<utility>
#include<map>

using namespace std;
class Slownik
    {

    multimap<string,string> slowa;
   
    public:
		string operator[](const string& key) { return slowa.find(key)->second; }
		void add(const string& key, const string& value) { slowa.insert(pair<string,string>(key,value)); }
		void change(const string& key, const string& value) { multimap<string,string>::iterator it=slowa.find(key); it->second=value;}
		
		string find(const string& key) {
			pair<multimap<string,string>::iterator,multimap<string,string>::iterator> er;
			er=slowa.equal_range(key);
			string ret;
			
			for(multimap<string,string>::iterator it=er.first; it!=er.second; it++) 
				ret+= it->second + ",";
				
			return ret.substr(0,ret.size()-1); }
		
		friend ostream& operator<<(ostream&,const Slownik&);
};
	
ostream& operator<<(ostream& out,const Slownik& slownik)
{
    out << "Slownik zawiera " << slownik.slowa.size() << " slow:" << endl;
    for(multimap<string,string>::const_iterator it=slownik.slowa.begin();it!=slownik.slowa.end();it++)

    out << "\t[" << it->first << "] => " << it->second << endl;
   
}
int main()
{
Slownik slownik;
slownik.add("dupa","czesc tylna");
slownik.add("dupa","tylna czesc wolu"); // drugie znaczenie
slownik.change("dupa","czesc zadnia"); // zmiana definicji
slownik.add("dupka","mala dupa");
slownik.add("wol","ten co ma dupe");
slownik.add("Dupa","wielka dupa");

cout << slownik["dupa"] << endl; // pierwsze znaczenie
cout << slownik.find("dupa") << endl; // wszystkie znaczenia
cout << slownik; // wypisz slownik

} 