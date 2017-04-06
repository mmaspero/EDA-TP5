#ifndef SERVER_H
#define SERVER_H

#include "GenericEvent.h"


//eventos:
typedef enum{RRQ, WRQ, ACK, LAST_ACK, DATA, LAST_DATA, TIMEOUT, ERROR, EXIT, EVENT_COUNT} event_t;

//teclas correspondientes a cada evento:
#define RRQ_K		'r'
#define WRQ_K		'w'
#define ACK_K		'a'
#define LAST_ACK_K	'l'
#define DATA_K		'd'
#define LAST_DATA_K	'b'
#define TIMEOUT_K	't'
#define ERROR_K		'e'
#define EXIT_K		'q'


genericEvent * eventGenerator();



#endif //SERVER_H