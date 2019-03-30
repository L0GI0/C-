#pragma once

template<int VAL>
struct TooLargeNumberMustBeSmallerThan10 {};

template<>
struct TooLargeNumberMustBeSmallerThan10 <10>;

template <int VAL, int POW>
class Power {
public:
	static const int Value = VAL*Power<VAL, (POW > 0) ? POW-1 : POW+1>::Value;
	TooLargeNumberMustBeSmallerThan10<POW> x;
};

template <int VAL>
class Power<VAL, 1> {
public:
	static const int Value = VAL;
};

template <int VAL>
class Power<VAL, 0> {
public:
	static const int Value = 1;
};

template <int VAL>
class Power<VAL, -1> {
public:
	static const int Value = 0;
};
