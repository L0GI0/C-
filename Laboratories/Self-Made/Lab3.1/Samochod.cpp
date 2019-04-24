#include "Samochod.h"

std::string Samochod::defaultColor = "Black";


void Samochod::DefaultColor(std::string color){
	defaultColor = color;
}

std::ostream & operator <<(std::ostream &o, const Samochod & tP){
// [INFO] Mercedes A
// [INFO] Stan licznika 0 [km]
// [INFO] Kolor Czerwony
	o << "[INFO] " << tP._model << std::endl;
	o << "[INFO] Stan licznika " << tP._meter << " [km]" << std::endl;
	o << "[INFO] Kolor " << tP._color;
	return o;
}

void Samochod::WheelsPressureInfo(){
// 	[INFO] Mercedes A :: Wheel [0] :: Pressure 2.2 [bar]
//  [INFO] Mercedes A :: Wheel [1] :: Pressure 2.2 [bar]
//  [INFO] Mercedes A :: Wheel [2] :: Pressure 2.2 [bar]
//  [INFO] Mercedes A :: Wheel [3] :: Pressure 2.2 [bar]
	for(int i = 0; i < 4; i++){
		std::cout << "[INFO] " << _model << " :: Wheel [" << i << "]" << " :: Pressure " << _wheels[i].Pressure() << " [bar]\n";  
	}

}

 Samochod & Samochod::Wheels(){
	return *this;
}


Kolo * Samochod::operator[](int i){
	return &_wheels[i];
}

void Silnik::operator()(std::string fuel, float power, float capacity){
	_fuel = fuel;
	_power = power;
	_capacity = capacity;
}


float Kolo::Pressure(){
	return _pressure;
}

void  Kolo::UpdatePressure(float pressure){
	_pressure = pressure;
}