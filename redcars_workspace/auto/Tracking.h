/*
 * Tracking.h
 *
 *  Created on: 29 Oct 2020
 *      Author: Merlijn
 */

#ifndef TRACKING_H_
#define TRACKING_H_

class Tracking {
public:
	Tracking();
	virtual ~Tracking();

	virtual void updateLocation() = 0;
};

#endif /* TRACKING_H_ */
