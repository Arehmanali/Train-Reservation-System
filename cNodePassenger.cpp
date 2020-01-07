#include "cNodePassenger.h"


/* seter function for ticket*/
void cNodePassenger::setTickects(int tickect)
{
	tickects = tickect;
}


void cNodePassenger::setPassengerName(string name)
{
	passengerName = name;
}

void cNodePassenger::setPassengerId(string id)
{
	passengerId = id;
}

string cNodePassenger::getPassengerName()
{
	return passengerName;
}

string cNodePassenger::getPassengerId()
{
	return passengerId;
}

int cNodePassenger::getTickects()
{
	return tickects;
}

cNodePassenger::cNodePassenger()
{
	nextP = NULL;
	passengerName = "";
	passengerId = "";
}


cNodePassenger::~cNodePassenger()
{

}
