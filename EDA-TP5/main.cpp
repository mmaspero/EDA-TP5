#include <iostream>

class genericState
{
public:

	virtual ?a onEv1(?b ) { return ?a };
	virtual ?a onEv2(?b ) { return ?a };
	...
	...
	virtual ?a onEvn(?b ) { return ?a };

};


class genericFMS
{
public:
	genericFMS();
	void dispach(eventObj& ev);

private:

protected:
	genericState *CurrentState;

};

void genericFMS::dispach(eventObj& ev)
{
	switch (ev.type)
	{
	case EV1:
		currentState->onEv1();
		break;
	case EV2:
		currentState->onEv2();
		break;

		(...)
	case EVn:
		currentState->onEvn();
		break;
	}
}