/*
 * Klant.h
 *
 *  Created on: 29 Oct 2020
 *      Author: Merlijn
 */

#ifndef KLANT_H_
#define KLANT_H_

class Klant {
public:
	Klant();
	virtual ~Klant();

	void checkAuthentication();
private:
	bool isAuthenticated;
};

#endif /* KLANT_H_ */
