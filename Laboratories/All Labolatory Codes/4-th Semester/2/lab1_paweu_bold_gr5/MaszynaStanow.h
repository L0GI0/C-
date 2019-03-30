#ifndef MASZYNASTANOW_H
#define MASZYNASTANOW_H


class Stan {
public:
	Stan(const char* stan): _stan(stan) {}
	const char* _stan;
};

class MaszynaStanow {
public:
	MaszynaStanow();
	~MaszynaStanow();
	void start();
	MaszynaStanow& operator += (Stan* dodawanyStan);
	MaszynaStanow& operator ++ ();
	MaszynaStanow& operator -- ();
	MaszynaStanow operator () ();
	int LiczbaStanow() const { return _liczbaStanow; }
	Stan** PrzekazStany() const { return _tablicaStanow; }
	int AktualnyStan() const { return _aktualnyStan; }
private:
	int _liczbaStanow;
	Stan** _tablicaStanow;
	int _aktualnyStan;
};

std::ostream& operator << (std::ostream& output, const MaszynaStanow& maszyna);

#endif