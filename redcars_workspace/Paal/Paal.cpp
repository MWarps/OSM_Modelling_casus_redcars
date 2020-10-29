/*
 * Paal.cpp
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#include "Paal.h"

Paal::Paal() :
		checkedIn(false) {

}

Paal::~Paal() {
	// TODO Auto-generated destructor stub
}

bool Paal::checkAuthentication() {
	return server.checkAuthentication(pasLezer.getPasNummer());

}

void Paal::checkPas() {
	if (!carDetector.detectNewCar()) {
		setCheckedIn(checkAuthentication());
	}else if(carDetector.detectNewCar()) {
		checkedIn = !server.checkAuthentication(pasLezer.getPasNummer());
		light.stopFlickering();
		display.displayCheckoutSuccesfull();
	}

}

void Paal::coreLoop() {
	while (true) {
		if (pasLezer.detectPas()) {
			checkPas();
			if (checkedIn) {
				display.displayCheckInSuccessfull();
			}
		}

		if (carDetector.detectNewCar()) {
			light.startFlickering();
			if (pasLezer.detectPas()) {
				checkPas();
			}
		}

	}
}

void Paal::setCheckedIn(bool checkedIn) {
	this->checkedIn = checkedIn;
}
