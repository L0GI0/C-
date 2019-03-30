#include <iostream>
#include "MapDistance.h"

MapDistance::MapDistance() {

}

MapDistance::MapDistance(float diff_lat, float diff_long) {
	_diff_lat = diff_lat;
	_diff_long = diff_long;
}

void MapDistance::print() {
	std::cout << "Distance: (" << _diff_long << ", " << _diff_lat << ")" << std::endl;
}