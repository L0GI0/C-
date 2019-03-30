#include <iostream>
#include "MapPoint.h"
#include "MapDistance.h"
#include <cmath>

int MapPoint::next_free_id = 1;

void MapPoint::set_latitude(float value) {
	_latitude = value;
}

void MapPoint::set_longitude(float value) {
	_longitude = value;
}

void MapPoint::assign_id() {
	_objectID = next_free_id++;
}

void MapPoint::print() {
	std::cout << "Point with ID=" << _objectID << " : (" << _latitude << ", " << _longitude << ")" << std::endl; 
}

void MapPoint::set_coordinates(float latitude, float longitude) {
	_latitude = latitude;
	_longitude = longitude;
}

MapDistance MapPoint::distance(MapPoint& city) {
	float distance_x = city._latitude - this->_latitude;
	if (distance_x < 0)
		distance_x = 0-distance_x;
	float distance_y = city._longitude - this->_longitude;
	if (distance_y < 0)
		distance_y = 0-distance_y;
	MapDistance distance (distance_x, distance_y);
	return distance;
}

MapPoint& MapPoint::closest(MapPoint& city1, MapPoint& city2) {
	float dist_c1, dist_c2;
	dist_c1 = sqrt((this->_latitude - city1._latitude)*(this->_latitude - city1._latitude)+(this->_longitude - city1._longitude)*(this->_longitude - city1._longitude));
	dist_c2 = sqrt((this->_latitude - city2._latitude)*(this->_latitude - city2._latitude)+(this->_longitude - city2._longitude)*(this->_longitude - city2._longitude));

	if (dist_c1 > dist_c2) 
		return city2;
	else
		return city1;

}