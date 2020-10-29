/*
 * DisplayController.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef DISPLAYCONTROLLER_H_
#define DISPLAYCONTROLLER_H_

class DisplayController {
public:
	virtual ~DisplayController();

	virtual void displayCheckInSuccessfull() = 0;
	virtual void displayCheckInFailed() = 0;
	virtual void displayCheckoutSuccesfull() = 0;
	virtual void displayCheckoutFailed() = 0;
};

#endif /* DISPLAYCONTROLLER_H_ */
