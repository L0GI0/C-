#pragma once 

#include "StanyBazowe.h"

class MaszynaStanow{

	public:

	~MaszynaStanow(){
		delete _states;
	}

	inline void operator++(){
		++_current;
	}
	inline void operator--(){
		--_current;
	}

	friend std::ostream &  operator<<(std::ostream &o, const MaszynaStanow & tP);

	MaszynaStanow(){

		_states = new Stan * [10];
	}
		void start();

	void operator +=(Stan * tA);
	
	Stan & operator()(){
		return *_states[_current];
	}


	private:
		Stan ** _states;
		int _size;
		int _current;
};	