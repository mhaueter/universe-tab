/*
 * Mass.cpp
 *
 *  Created on: Aug 2, 2012
 *      Author: Michael
 */

#include "Mass.h"

namespace physics {

Mass::Mass() {
	totalMass = 0; // No mass
	SphereOfInfluence = 0; // No Influence

}


Mass::~Mass() {
	// TODO Auto-generated destructor stub
}

double Mass::getGravitationalForce(Mass object1, double distance){
	if(distance > (SphereOfInfluence + object1.SphereOfInfluence)){
		return 0;
	}
	else{
		return gravConst * object1.totalMass * totalMass / (distance*distance);
	}
}


} /* namespace physics */
