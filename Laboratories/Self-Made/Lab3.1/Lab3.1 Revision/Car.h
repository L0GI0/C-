#pragma once 


#include <iostream>
#include <string>


class Engine{

	public:
		Engine(std::string fuel, float capacity, float power): _fuel(fuel), _capacity(capacity), _power(power){}
		inline std::string getFuel(){
			return _fuel;
		}
		inline float getCapacity(){
			return _capacity;
		}
		inline float getPower(){
			return _power;
		}
		
	// 		[INFO] Engine:: Fluel Pb98
	// [INFO] Engine:: Capacity 1398 [cm^3]
	// [INFO] Engine:: Power 45 [kW]
	

	private:
		std::string _fuel;
		float _capacity;
		float _power;
};

class Wheel{
	// [INFO] :: Wheel [0] :: Pressure 2.2 [bar]
	public:
		Wheel():_pressure(2.2){}

		inline float Pressure(){
			return _pressure;
		}

	private:

		float _pressure;
};




class Car : public Engine {

	public:

		Car(std::string brand, std::string fuel, float capacity, float power);

		static Car * Create(std::string brand);
		static void defaultColor(std::string color);

		friend std::ostream & operator<<(std::ostream & o, Car & tP);
		
		void PressureInfo();
		
		inline static void DefaultColor(std::string defaultColor){
			_defaultColor = defaultColor;
		}
		inline std::string getClassName(){
			return "Car:: ";
		}
		inline std::string getBrand(){
			return _brand;
		} 
		inline std::string getColor(){
			return _color;
		}
		
		inline Car * Wheels(){
			return this;
		}

		inline Wheel ** WheelsVector(){
			return _wheels;
		}

	private:
		std::string _color;
		std::string _brand;
		static	std::string _defaultColor;
		Wheel **_wheels;
};
