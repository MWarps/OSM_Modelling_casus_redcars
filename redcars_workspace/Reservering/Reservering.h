/*
 * Reservering.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef RESERVERING_H_
#define RESERVERING_H_

class Reservering {
public:
	Reservering();
	virtual ~Reservering();

	bool checkAvailableCars(Cars car, int tijdsduur);
	float calculatePrice(bool abbonnement, std::string tijdsType, int tijdsDuur);
	void finishReservation();
	void pay(float prijs);

private:
	float prijs;
	int tijdsduur;
	std::string tijdsType;
};

#endif /* RESERVERING_H_ */
