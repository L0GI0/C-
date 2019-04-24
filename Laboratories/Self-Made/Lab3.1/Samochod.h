#pragma once 


#include <iostream> 
#include <string>



class Silnik{
	public:
		void operator()(std::string fuel, float power, float capacity);
		std::string getInfo();
	private:
		std::string _fuel;
		float _power, _capacity;
};

class Kolo{
	
	public:
		
		Kolo():_pressure(2.2){}
		float Pressure();
		void  UpdatePressure(float pressure);

	private:
	
		float _pressure;
};


class Samochod{

	public:

		Samochod(std::string model, std::string fuel, float power, float capacity, float meter)
		:_model(model), _meter(meter){
			_color = defaultColor;
			_engine(fuel, power, capacity);
			_wheels = new Kolo  [4];
		}
		static void DefaultColor(std::string color);
		friend std::ostream & operator <<(std::ostream &o, const Samochod & tP); 
		static std::string defaultColor;
		virtual Samochod & Wheels();
		virtual void WheelsPressureInfo();
		Kolo *  operator[](int i);
		
	protected:

		std::string _model;
		Silnik _engine;
		std::string _color;
		float _meter;
		Kolo * _wheels;
};

class Mercedes: public Samochod {
	public:

		Mercedes(std::string fuel, float power, float capacity, float meter = 0)
		:Samochod("Mercedes A", fuel, power, capacity, meter){}

	private:
};