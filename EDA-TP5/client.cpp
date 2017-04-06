#include "client.h"


#include <cctype>
#include "curses.h"

genericEvent * eventGenerator()
{
	genericEvent * ev = NULL;

	int key = getch();
	
	switch(tolower(key)){
		case ACK_K:
			ev = new genericEvent(); //NO SERIA GENERIC, SERIA ESPECIFICO
			break;

		case LAST_ACK_K: break;
		case DATA_K: break;
		case LAST_DATA_K: break;
		case TIMEOUT_K: break;
		case ERROR_K: break;
		case EXIT_K: break;
	}

	return ev;
}