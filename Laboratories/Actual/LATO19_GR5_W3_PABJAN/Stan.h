#pragma once 

#include <iostream>
#include <string>

class MaszynaStatnow;

#define STATE_TYPE( STATE ) class STATE : public Stan
	
	
class Stan{

	public:

		virtual void operator()(){}
		friend MaszynaStatnow;
		virtual const char* nazwa() const{};
	
	private:

};


STATE_TYPE( ZbieranieDanych ){

	public:
		
		void operator()();
		ZbieranieDanych(std::string data):_data(data){}

		inline std::string getDataType(){
			return _type;
		}

		inline std::string getData(){
			return _data;
		}

		virtual const char* nazwa() const { 
		return "ZbieranieDanych";
	}
	
	virtual void podsumowanie() const;

	public:
		std::string _type;
		std::string _data; 
};


STATE_TYPE( Podsumowanie ){

	public:
		
		virtual void podsumowanie() const;

		virtual const char* nazwa() const { 
		return "Podsumowanie";
	}
		void operator()();

	private:
		MaszynaStatnow *_ptr;
};

