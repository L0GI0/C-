#pragma once 


class AttFormat{
public:
	enum Option {
		BOLD, DIM, UNDERLINED, RESET
	};

public:
	AttFormat() = default;
	AttFormat(Option option) : m_Option(option) {}
	~AttFormat() = default;

	void setFormat(AttFormat::Option format) { m_Option = format; }
	const Option getFormat() const { return m_Option; }

protected:
	Option m_Option;
};