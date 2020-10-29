/*
 * CarDetector.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef CARDETECTOR_H_
#define CARDETECTOR_H_

class CarDetector {
public:
	virtual ~CarDetector();

	virtual bool detectNewCar() = 0;
	virtual bool doesCarBelong() = 0;
};

#endif /* CARDETECTOR_H_ */
