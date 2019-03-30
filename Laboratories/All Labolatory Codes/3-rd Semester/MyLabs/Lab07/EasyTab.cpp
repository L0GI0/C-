#include "EasyTab.h"
#include <iostream>
#include <cstring>

using namespace std;


EasyTab::EasyTab(int first, int last){
	_first = first;
	_last = last;
	_range =  _last - _first;
	_array = new double[_range]; 
}

void EasyTab::setAll(double value){
	int i;
	for(i = 0; i < _range; i++)
		_array[i] = value;
}

double & EasyTab::at(int element) const{
	if(element > 0)
	return _array[_range - element];
	else return _array[_range + element];
	
}

int EasyTab::inRange(int element){
	if(element > _first && element < _last)
		return 1;
	else return 0; 
}

 void EasyTab::print(const EasyTab &eTab){
 	int i;
 	for(i = 0; i < eTab._range; i++)
 		cout << (eTab._first + i) << ":" << eTab._array[i] << " ";
 }

EasyTab::EasyTab(const EasyTab & etab){
	_first = etab._first;
	_last = etab._last;
	_range = etab._last - etab._first;
	_array = new double[_range];
	//memcpy(_array, etab._array);
	int i;
	for(i = 0; i < _range; i++)
	_array[i] = etab._array[i];

}

EasyTab::EasyTab(const EasyTab &etab, int first, int last){
	_first = etab._first;
	_last = etab._last;
	_range = _last - _first;
	_array = new double[_range];
	int i;
	for(i = 0; i < _range; i++){
		_array[i] = etab._array[i];
	}
}

 EasyTab::~EasyTab(){
 	delete [] _array;
 };
