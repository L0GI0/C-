#pragma once

/**
*	Struktura sluzaca do sortowania tworzonego 
*	zbioru w kolejnosci od najmlodszego do 
*	najstarszego elementu.
*/
struct ReverseOrder {
	bool operator () (const Student& s1, const Student& s2) const {
		return s1.GetID() > s2.GetID();
	}
};