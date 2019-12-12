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
	PassengerList(cNodePassenger*& ptr);
	int getcountPassenger();
	void newBooking(string name, string id);
	void cancelBooking(string id);
	void PassengerBill(string id);
	PassengerList();
	~PassengerList();
};

