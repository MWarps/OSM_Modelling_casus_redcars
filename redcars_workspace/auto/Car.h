/*
 * Car.h
 *
 *  Created on: 29 Oct 2020
 *      Author: Merlijn
 */

#ifndef CAR_H_
#define CAR_H_

#include <string>

#include "Klant.h"

class Car {
public:
	Car();
	virtual ~Car();
private:
	std::string nummerBord;
	unsigned int kmStand;
	Klant klant;
};

#endif /* CAR_H_ */
