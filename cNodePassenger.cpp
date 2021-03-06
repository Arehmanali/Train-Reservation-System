#include "cNodePassenger.h"


/* seter function for ticket as taking integer argument*/
void cNodePassenger::setTickects(int tickect)
{
	tickects = tickect;
}

/* setter function for passenger name by taking string name as argument*/
void cNodePassenger::setPassengerName(string name)
{
	passengerName = name;
}

// setter function for setting id of passenger as taking string argument
void cNodePassenger::setPassengerId(string id)
{
	passengerId = id;
}

// getter function for getting passenger name
string cNodePassenger::getPassengerName()
{
	return passengerName;
}

// getter function for getting passenger id
string cNodePassenger::getPassengerId()
{
	return passengerId;
}

// getter function for getting total tickets of train
int cNodePassenger::getTickects()
{
	return tickects;
}

// default constructor for setting next pointer, name and id to null 
cNodePassenger::cNodePassenger()
{
	nextP = NULL;
	passengerName = "";
	passengerId = "";
}

//destructor
cNodePassenger::~cNodePassenger()
{

}
