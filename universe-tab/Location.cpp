/*
 * Location.cpp
 *
 *  Created on: May 30, 2012
 *      Author: Michael Haueter
 */

#include "Location.h"

namespace loc_namespace {

Location::Location() {
	x = 0;
	y = 0;
	z = 0;

}

Location::~Location() {
	// TODO Auto-generated destructor stub
}

double Location::getX(){
	return x;
}

double Location::getY(){
	return y;
}

double Location::getZ(){
	return z;
}

void Location::setLoc(double x, double y, double z){
	this->x = x;
	this->y = y;
	this->z = z;
}

void Location::setLoc(int x, int y, int z){
	this->x = (double) x;
	this->y = (double) y;
	this->z = (double) z;
}



} /* namespace loc_namespace */
