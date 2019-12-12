#pragma once
#include"cNode.h"
#include<iostream>
#include<fstream>
using namespace std;
class TrainList
{
	int countTrain;
public:
	cNode* upTrain;
	TrainList();
	TrainList(cNode*& ptr);
	void addTrain(string trainNam, string trainRout, string trainTime, int far, int availableTickt);
	void deleteTrain(string trainNam);
	void printTrain();
	int getCountTrain();
	void editExistingTrain(string trainNam);
	void viewSoldTickect();
	void viewTotalSale();
	~TrainList();
};

