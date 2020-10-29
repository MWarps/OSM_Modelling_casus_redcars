/*
 * Klant.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef KLANT_H_
#define KLANT_H_

class Klant {
public:
	Klant();
	virtual ~Klant();

private:
	bool abbonement;
	float betalingsachterstand;
};

#endif /* KLANT_H_ */
