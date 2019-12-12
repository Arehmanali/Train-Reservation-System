#pragma once
#include<iostream>
using namespace std;
class cNode
{
	string trainName;
	int fare;
	string trainTiming;
	string trainRoute;
	int availabeTickets;
public:
	cNode* next;
	cNode();
	void setTrainName(string st);
	void setFare(int f);
	void setTrainTiming(string tt);
	void setTrainRoute(string tr);
	void setAvailableTickets(int at);
	string getTrainName();
	int getFare();
	string getTrainTiming();
	string getTrainRoute();
	int getAvailableTickets();
	~cNode();
};

