/*
 * Location.h
 *
 *  Created on: May 30, 2012
 *      Author: Michael Haueter
 */

#ifndef LOCATION_H_
#define LOCATION_H_

namespace loc_namespace {

class Location {
public:
	Location();
	virtual ~Location();
	double getX();
	double getY();
	double getZ();
	void setLoc(double x, double y, double z);
	void setLoc(int x, int y, int z);
protected:
	double x;
	double y;
	double z;
};

} /* namespace loc_namespace */
#endif /* LOCATION_H_ */
