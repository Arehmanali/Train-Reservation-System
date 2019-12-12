#pragma once
#include"TrainList.h"
#include"cNodePassenger.h"
#include<iostream>
#include<iomanip>
#include<fstream>
using namespace std;
class PassengerList:public TrainList
{
	int countPassenger;
public:
	cNodePassenger* topPassenger;
	int getcountPassenger();
	void newBooking(string name, string id);
	void cancelBooking(string id);
	void PassengerBill();
	PassengerList();
	~PassengerList();
};

