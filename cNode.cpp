#include "cNode.h"

cNode::cNode()
{
	next = NULL;
	trainName = "";
	trainTiming = "00:00";
	trainRoute = "";
	fare = 0;
	availabeTickets = 0;
}

void cNode::setTrainName(string st)
{
	trainName = st;
}

void cNode::setFare(int f)
{
	fare = f;
}

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
