#ifndef INTSEQUENCE_H
#define INTSEQUENCE_H

class IntSequence
{
public:
	IntSequence();
	~IntSequence();
	IntSequence& operator << (const int num);
	int operator () () const; 
	IntSequence& operator ++ (int);
	IntSequence& operator -- (int);
	operator int() const;
	int dajAktualny() const { return _tab[_aktualny]; }
	void reset() { _aktualny = 0; }
	bool finished() const;
private:
	int _n;
	int* _tab;
	int _aktualny;
};

ostream& operator << (ostream& output, const IntSequence& seq);

#endif