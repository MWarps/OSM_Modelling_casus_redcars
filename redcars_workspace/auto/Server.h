/*
 * Server.h
 *
 *  Created on: 29 Oct 2020
 *      Author: yodas
 */

#ifndef SERVER_H_
#define SERVER_H_


class Server { //interface naar server
public:
	virtual ~Server();

	virtual bool checkAuthentication(const unsigned int pasNummer) = 0; //update class diagram
};

#endif /* SERVER_H_ */
