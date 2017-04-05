#include <iostream>

class genericState
{
public:

	virtual ?a onEv1(?b ) { return NULL };	//onAlarmSet
	virtual ?a onEv2(?b ) { return NULL };	//onPM
	virtual ?a onEv2(?b ) { return NULL };	//onTimeOut
	(...);
	virtual ?a onEvn(?b ) { return ?a };	//onPP

};


class genericFMS
{
public:
	genericFMS();
	void dispach(genericEvent& ev);

private:

protected:
	genericState *CurrentState;

};

void genericFMS::dispach(genericEvent& ev)
{
	genericState * newState;
	
	switch (ev.type)
	{
	case PRESIONE_MUCHO:
		newState = CurrentState->omPM();
		break;
	case ALARM_TIME:
		newState = currentState->onAlarmSet();
		break;
	}

	if (newSate != NULL)
	{
		delete currentState;
		currentState = newState;
	}
}


class genericEvent
{
public:
	eventType type()
	{
		return ev;
	}
protected:
	eventType ev;

private:

};


class EV1: public genericEvent
{
public:
	EV1() { ev = EV1; }		//ALARMSET
	funciones especificas;

private:
	datos especificos;
};


class ringing: public genericState
{
public:
	genericState * onPm(genericEvent * ? )
	{
		genericState ... ? ;


		ret = new Idle();
		return ret;
	}
private:

};

class PM: public genericEvent
{
public:
	PM() { ev = Precione_MUCHO; }
	(...);
private:

};
