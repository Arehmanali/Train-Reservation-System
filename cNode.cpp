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

void cNode::setTrainRoute(string tr)
{
	trainRoute = tr;
}

void cNode::setAvailableTickets(int at)
{
	availabeTickets = at;
}

string cNode::getTrainName()
{
	return trainName;
}

int cNode::getFare()
{
	return fare;
}

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
