#pragma once
#include<iostream>
#include<iomanip>
using namespace std;

class cNodePassenger
{
	string passengerName;
	string passengerId;
	int tickects;
public:
	cNodePassenger* nextP;
	void setTickects(int tickect);
	void setPassengerName(string name);
	void setPassengerId(string id);
	string getPassengerName();
	string getPassengerId();
	int getTickects();
	cNodePassenger();
	~cNodePassenger();
};

