#include "TrainList.h"
#include<iomanip>
#include<string>
#include<fstream>
/*Default Constructor*/

TrainList::TrainList()
{
	upTrain = NULL;
	countTrain = 0;
}

/ Parametric Constructor*/
TrainList::TrainList(cNode*& ptr)
{
	upTrain = ptr;
	ptr = upTrain->next = NULL;
	countTrain = 1;
}

/* Add train function for adding the new train in train List*/
void TrainList::addTrain(string trainNam,string trainRout,string trainTime, int far,int availableTickt)
{
	cNode* ptr = new cNode();
	ptr->setTrainName(trainNam);
	ptr->setTrainRoute(trainRout);
	ptr->setTrainTiming(trainTime);
	ptr->setFare(far);
	ptr->setAvailableTickets(availableTickt);

	if (!upTrain == 0)
	{
		ptr->next = upTrain;
		upTrain = ptr;
	}
	else
	{
		upTrain = ptr;
	}
	countTrain++;
	ptr = NULL;
}

int TrainList::getCountTrain()
{
	return countTrain;
}
void TrainList::editExistingTrain(string trainNam)
{
	string name;
	int num;
	cNode* ptr = upTrain;
	for (int i = 0; i < countTrain; ++i)
	{
		if (ptr->getTrainName() != trainNam)
		{
			ptr = ptr->next;
		}
		else
		{
			int option;
			cout << "Select the Option from below:";
			cin >> option;
			cout << "1. Edit Train Name\n";
			cout << "2. Edit Train Route\n";
			cout << "3. Edit Train Timing\n";
			cout << "4. Edit Train Fare\n";
			cout << "5. Edit Train Available Seats\n";
			cout << "6. Move Back\n";
			switch (option)
			{
			case 1:
				cout << "Enter the New Name of " << trainNam << " :";
				getline(cin, name);
				ptr->setTrainName(name);
				cout << "The Name of " << trainNam << " Edited Successfully\n";
				break;
			case 2:
				cout << "Enter the New Route of " << trainNam << " :";
				getline(cin, name);
				ptr->setTrainRoute(name);
				cout << "The Route of " << trainNam << " Edited Successfully\n";
				break;
			case 3:
				cout << "Enter the New Timing of " << trainNam << " in format (00:00) :";
				getline(cin, name);
				ptr->setTrainTiming(name);
				cout << "The Timing of " << trainNam << " Edited Successfully\n";
				break;
			case 4:
				cout << "Enter the New Fare of " << trainNam << " :";
				cin >> num;
				ptr->setFare(num);
				cout << "The Fare of " << trainNam << " Edited Successfully\n";
				break;
			case 5:
				cout << "Enter the New Available Seats of " << trainNam << " :";
				cin >> num;
				ptr->setAvailableTickets(num);
				cout << "The Available Seats of " << trainNam << " Edited Successfully\n";
				break;
			case 6:
				break;
			defaul :
				cout << "Select the Right Option\n";
				break;
			}

		}
	}
}
void TrainList::viewSoldTickect()
{
	cNode* rptr = upTrain;
	for (int i = 0; i < countTrain; ++i)
	{
		cout << "Train Name" << setw(15) << "Available Seats\n";
		cout << rptr->getTrainName() << setw(15) << rptr->getAvailableTickets()<<endl;
		rptr = rptr->next;
	}
}

void TrainList::viewTotalSale()
{
	cNode* rptr = upTrain;
	for (int i = 0; i < countTrain; ++i)
	{
		cout << "Train Name" << setw(15) << "Total Sale Rs.\n";
		cout << rptr->getTrainName() << setw(15) << rptr->getAvailableTickets()*rptr->getFare() << endl;
		rptr = rptr->next;
	}
}

void TrainList::deleteTrain(string trainNam)
{
	if (!upTrain)
	{
		cout << "\n The List of Train is Empty!\n";
	}
	else
	{
		cNode* ptr,*rptr = upTrain;
		for (int i = 0; i < countTrain; ++i)
		{
			ptr = rptr;
			if (rptr->getTrainName() == trainNam)
			{
				ptr->next = rptr->next;
				
			}
			else
			{
				rptr = rptr->next;
			}
		}
		ptr->next = NULL;
		delete ptr;
		countTrain--;
	}
}
void TrainList::printTrain()
{
	if (!upTrain)
	{
		cout << "The list of Train is Empty!";
	}
	cNode* ptr = upTrain; int count=0;
	cout <<"Sr. No"<<setw(15)<< "Train Name" << setw(15) << "Route" << setw(15) << "Time" << setw(15) << "Fare" << setw(15) << "Available Seats" << endl;
	for (int i = 0; i < countTrain; ++i)
	{
		cout <<count++<<setw(15)<< ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getFare() << setw(15) << ptr->getAvailableTickets() << endl;
		ptr = ptr->next;
	}
}
TrainList::~TrainList()
{
}
