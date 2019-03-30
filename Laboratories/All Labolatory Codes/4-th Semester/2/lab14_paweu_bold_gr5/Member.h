#pragma once
#include <string>
#include <iostream>

class Member {
public:
	Member(std::string name): _name(name), _power(0), _magic(0), _health(0) {}
	Member& power(const int& pow) { _power = pow; return *this; }
	Member& magic(const int& magic) { _magic = magic; return *this; }
	int magic() const {  return _magic; }
	Member& health(const int& health) { _health = health; return *this; }
	std::string get_name() const { return _name; }
	int get_power() const { return _power; }
	int get_magic() const { return _magic; }
	int get_health() const { return _health; }
	bool operator < (const Member& sec) const { return _name < sec._name; }
private:
	std::string _name;
	int _power;
	int _magic;
	int _health;
};

std::ostream& operator << (std::ostream& o, const Member& member) {
	return o << member.get_name() << " power:" << member.get_power() << " magic:" << member.get_magic() << " health:" << member.get_health() << "\n";
}

struct Compare {
	bool operator () (const Member& p1, const Member& p2) {return p1.get_name() < p2.get_name(); }
};