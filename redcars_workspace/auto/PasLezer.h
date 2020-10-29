/*
 * PasLezer.h
 *
 *  Created on: 29 Oct 2020
 *      Author: Merlijn
 */

#ifndef PASLEZER_H_
#define PASLEZER_H_

class PasLezer { //interface
public:
	virtual ~PasLezer();

	virtual unsigned int getPasNummer() = 0;
	virtual bool detectPas() = 0;
};

#endif /* PASLEZER_H_ */
