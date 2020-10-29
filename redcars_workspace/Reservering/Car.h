/*
 * Car.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef CAR_H_
#define CAR_H_

class Car {
public:
	Car();
	virtual ~Car();

	std::vector<Car> showAvailableCars();
	void setAvailable(bool available);
private:
	std::string stad;
	std::string parkeerLocatie;
	std::string type;
	bool available;
};

#endif /* CAR_H_ */
