/*
 * Paal.cpp
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#include "Paal.h"

Paal::Paal() : checkedIn(false){

}

Paal::~Paal() {
	// TODO Auto-generated destructor stub
}

bool Paal::checkAuthentication() {
	return server.checkAuthentication(pasLezer.getPasNummer());

}

void Paal::checkPas() {
	setCheckedIn(checkAuthentication());

}

void Paal::coreLoop() {
	while(true) {
		if(pasLezer.detectPas()) {
			checkPas();
			if(checkedIn) {
				display.displayCheckInSuccessfull();
			} else {
				display.displayCheckInFailed();
			}
		}

		if(CarDetector.detectNewCar()) {

		}


	}
}

void Paal::setCheckedIn(bool checkedIn) {
	this->checkedIn = checkedIn;
}
