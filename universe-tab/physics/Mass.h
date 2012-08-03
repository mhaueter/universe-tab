/*
 * Mass.h
 *
 *  Created on: Aug 2, 2012
 *      Author: Michael
 */

#ifndef MASS_H_
#define MASS_H_

namespace physics {

class Mass {
private:
	const double gravConst = 6.67384e-11;
	double totalMass; // total mass of an object in Kg
	double SphereOfInfluence;
public:
	Mass();
	virtual ~Mass();
	double getGravitationalForce(Mass object1, double distance);
};

} /* namespace physics */
#endif /* MASS_H_ */
