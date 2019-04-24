#pragma once

class TwoArg{
	public:
		virtual bool result(bool a, bool b)const{return a || b;}
	private:
};



class Logical: public TwoArg{

	public:
		static bool eval(const Logical & o, bool a, bool b = false);
		// \\virtual bool eval(bool a){return a;}
	private:

};

class OR: public Logical{

	public:
		bool result(bool a, bool b)const;

	private:

};

class AND: public Logical{
	public:
		bool result(bool a, bool b)const;

	private:
};

class NOT: public Logical{

	public:
	virtual bool result(bool a, bool b)const; 
	private:
};