/*
 * Paal.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef PAAL_H_
#define PAAL_H_

#include "Server.h"
#include "PasLezer.h"
#include "LightControl.h"
#include "CarDetector.h"
#include "DisplayController.h"

class Paal {
public:
	Paal();
	virtual ~Paal();

	void coreLoop();

	bool checkAuthentication();
	void checkPas();
	void setCheckedIn(bool checkedIn); // customer is now checked in. update class diagram

private:
	bool checkedIn;
	Server server;
	PasLezer pasLezer;
	LightControl light;
	CarDetector carDetector;
	DisplayController display;
};

#endif /* PAAL_H_ */
