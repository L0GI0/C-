#include "Car.h"

std::string  Car::_defaultColor = "Red";

void Car::defaultColor(std::string color){
	_defaultColor = color;
}



Car * Car::Create(std::string brand){
	Car * car;
	
	if(brand == "Mercedes") 
		car  = new Car("Mercedes A", "ON", 1589, 65);
	else if(brand == "Ford") car = new Car("Ford Fiesta", "Pb98", 1398, 45);
	
	return car; 
}


Car::Car(std::string brand, std::string fuel, float capacity, float power): _brand(brand), Engine(fuel, capacity, power){
	_wheels = new Wheel * [4];
	for(int i = 0; i < 4; i++){
		_wheels[i] = new Wheel;
	}
	_color = _defaultColor;
}

 std::ostream & operator<<(std::ostream & o, Car & tP){
	// 	[INFO] Car:: Type Mercedes A
	// [INFO] Car:: Color Red
	// [INFO] Engine:: Fluel ON
	// [INFO] Engine:: Capacity 1598 [cm^3]
	// [INFO] Engine:: Power 65 [kW]
 	o << "[INFO] Car:: " << " Type " << tP.getBrand() << std::endl;
 	o << "[INFO] Car:: " << " Color " << tP.getColor() << std::endl;
 	o << "[INFO] Engine:: " << tP.getFuel() << std::endl;
 	o << "[INFO] Engine:: " << tP.getCapacity() << " [cm^3]" << std::endl;
 	o << "[INFO] Engine:: " << tP.getPower() << " [kW]" << std::endl;
 	return o;
}

//Wheels::

void Car::PressureInfo(){

	// [INFO] :: Wheel [0] :: Pressure 2.2 [bar]
	// [INFO] :: Wheel [1] :: Pressure 2.2 [bar]
	// [INFO] :: Wheel [2] :: Pressure 2.2 [bar]
	// [INFO] :: Wheel [3] :: Pressure 2.2 [bar]
	for(int i = 0; i < 4; i++){
		std::cout << "[INFO] :: Wheel [" << i + 1 << "] :: Pressure " << _wheels[i]->Pressure() << " [bar]" << std::endl;

	}
}

