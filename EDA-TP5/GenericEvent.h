#ifndef GENERIC_EVENT_H
#define GENERIC_EVENT_H

#define	CLIENT	1	
#define SERVER	0

#define I_AM	CLIENT

#if I_AM == CLIENT
#include "client.h"
#elif I_AM == SERVER
#include "server.h"
#else
#error	"This program must emulate either a CLIENT or a SERVER in a TFTP connection"
#endif



class genericEvent
{
public:
	event_t type()
	{
		return ev;
	}
protected:
	event_t ev;

private:

};


#endif //GENERIC_EVENT_H