#pragma once

class AttColor {
public:
		enum Option {
		BLACK,
		RED,
		GREEN,
		YELLOW,
		BLUE,
		MAGENTA,
		CYAN,
		GRAY,
		WHITE,
		RESET
	};

public:
	AttColor() = default;
	AttColor(Option option) : m_Option(option) {}
	~AttColor() = default;

	void setColor(AttColor::Option color) { m_Option = color; }
	const Option getColor() const { return m_Option; }
protected:
	Option m_Option;
};