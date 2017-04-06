extern "C" {
#include <stdio.h>
#include <stdlib.h>
#include "curses.h"
}

#include "GenericEvent.h"

void dispatch(genericEvent&);


int main(void) 
{
	WINDOW * winTest=NULL;                     //Variable en dónde se guarda la terminal (Window) en donde voy a trabajar.
	int i;				                       //Variable para iterar
	int xWinTestPos ,yWinTestPos;              //Variables en donde voy a guardar la posición del cursor.
	genericEvent * newEv;

	//Inicializo la terminal y verifico que se haya inicializado correctamente:
	winTest = initscr();
	if(winTest == NULL)
	{
		return EXIT_FAILURE;
	}
	//Esta opción hace que siempre que se llame a una función que escribe se refresque la pantalla.
	immedok(winTest,TRUE);
	//Con las dos opciones de abajo elijo que el getch()sea no bloqueante (nodelay TRUE) y que no
	//muestr los caracteres cuando el usuario los escribe (noecho).
	nodelay(winTest, TRUE);
	noecho();


	printw("Programa de simulación de cliente TFTP implementado con FSM \n\n"
		"Cuando el usuario presiona las teclas de Eventos entiende \n"
		"que se generó un nuevo evento y responde ante ese evento \n"
		"realizando una acción y cambiando el estado.");



	move(2*EVENT_COUNT + 2,0);			
	printw("Press \"Q\" to continue...\n");

	do {
		newEv = eventGenerator();

		if (newEv != NULL && newEv->type != EXIT) {
			dispatch(*newEv);
			delete newEv;
		}
	}
	while (newEv->type != EXIT);
	
	delete newEv;
	

	//Llamo para termiar PDCurses.
	endwin();
	
		
	return 0;
}






