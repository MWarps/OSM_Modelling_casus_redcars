/*
 * AutoControl.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef AUTOCONTROL_H_
#define AUTOCONTROL_H_

#include "PasLezer.h"
#include "Tracking.h"

class AutoControl {
public:
	virtual ~AutoControl();
	AutoControl();

	void unlock();
	void lock();
	void startEngine();
private:
	PasLezer paslezer;
	Tracking tracker;
};

#endif /* AUTOCONTROL_H_ */
