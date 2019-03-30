#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	vector<pair<string, string> > slownik(10);
	
	fill(slownik.begin(), slownik.end(), make_pair("car", "auto"));
	
	vector<pair<string, string> >::iterator it = slownik.begin();
	cout << it->first;
}