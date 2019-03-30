#pragma once

#include <string>

class Printable {
public:
	Printable() = default;
	virtual ~Printable() = default;

	virtual void print() const = 0;
	virtual const std::string rawString() const = 0;
};