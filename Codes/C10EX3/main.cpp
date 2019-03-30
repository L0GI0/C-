#include "golf.h"
#include <iostream>
#include <vector>

using namespace std;

int main(void){

int players;
int i = 0;
cout << "Please enter number of golf players: ";
cin >> players;
cin.ignore();
vector<Golf> golfers;
Golf temp;
for(i = 0; i < players; i++)
	golfers.push_back(temp);
for(i = 0; i < players; i++)
	golfers[i] = Golf();
golfers[0] = Golf("Player2", 10);
for(i = 0; i < players; i++)
	golfers[i].showGolf();	
}