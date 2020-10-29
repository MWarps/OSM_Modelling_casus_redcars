/*
 * DisplayController.h
 *
 *  Created on: 29 Oct 2020
 *      Author: Merlijn
 */

#ifndef DISPLAYCONTROLLER_H_
#define DISPLAYCONTROLLER_H_

class DisplayController {
public:
	virtual ~DisplayController();

	virtual void displayCheckInSuccessfull() = 0;
	virtual void displayCheckoutSuccesfull() = 0;
};

#endif /* DISPLAYCONTROLLER_H_ */
