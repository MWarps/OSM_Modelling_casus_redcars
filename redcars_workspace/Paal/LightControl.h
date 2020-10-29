/*
 * LightControl.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef LIGHTCONTROL_H_
#define LIGHTCONTROL_H_

class LightControl {
public:
	virtual ~LightControl();

	virtual void startFlickering() = 0;
	virtual void stopFlickering() = 0;
};

#endif /* LIGHTCONTROL_H_ */
