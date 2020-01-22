#include "cNode.h"
// default constructor for setting members to default value
cNode::cNode()
{
	next = NULL;
	trainName = "";
	trainTiming = "00:00";
	trainRoute = "";
	fare = 0;
	availabeTickets = 0;
}

// setter function for setting train name by taking name as argument
void cNode::setTrainName(string st)
{
	trainName = st;
}

// stter function for setting fare of train by taking integer argument
void cNode::setFare(int f)
{
	fare = f;
}

// setter function for setting train time by taking a string argument
void cNode::setTrainTiming(string tt)
{
	trainTiming = tt;
}

// setter function for setting the name of train by taking name as argument
void cNode::setTrainRoute(string tr)
{
	trainRoute = tr;
}

/*Setter funtion for available tickets in a train by taking number of tickets as argument*/
void cNode::setAvailableTickets(int at)
{
	availabeTickets = at;
}

/* getter function for getting the train name*/
string cNode::getTrainName()
{
	return trainName;
}

/* getter function for getting the train fare*/
int cNode::getFare()
{
	return fare;
}

/* getter function for getting the train time */
string cNode::getTrainTiming()
{
	return trainTiming;
}


string cNode::getTrainRoute()
{
	return trainRoute;
}

int cNode::getAvailableTickets()
{
	return availabeTickets;
}


cNode::~cNode()
{
}
