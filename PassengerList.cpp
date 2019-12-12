#include "PassengerList.h"

PassengerList::PassengerList(cNodePassenger*& ptr)
{
	topPassenger = ptr;
	countPassenger = 1;
	topPassenger->nextP = ptr = NULL;
}

int PassengerList::getcountPassenger()
{
	return countPassenger;
}

void PassengerList::newBooking(string name, string id)
{
	int option, option2, numOfTickect;
	string nam;
	cout << "Enter Your Name :";
	cin >> name;
	cout << "Enter Your CNIC No. or ID :";
	cin >> id;
	cNodePassenger* passengeerPtr = new cNodePassenger();
	passengeerPtr->setPassengerName(name);
	passengeerPtr->setPassengerId(id);
	
			cout << "Select the Route\n";
			cout << "1.	Lahore to Karachi\n";
			cout << "2.	Lahore to Islamabad\n";
			cout << "3.	Karachi to Lahore\n";
			cout << "4.	Islamabad to Lahore\n";
			cout << "Choose the Option:";
			cin >> option2;
			switch (option2)
			{
			case 1:
			{
				cNode* ptr = upTrain;
				string trainNa[2];
				int count = 0, option3;
				cout << "Select the Train From Following\n";
				cout << "Sr. No" << setw(15) << "Train Name" << setw(15)<<"Route"<<setw(15)<< "Fare" << setw(15) << "Time" <<setw(15)<<"Seats Available"<< endl;
				for (int i = 0; i < getCountTrain(); ++i)
				{
					if (ptr->getTrainRoute() == "Lahore to Karachi")
					{
						cout << count++ << setw(15) << ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getFare() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getAvailableTickets() << endl;
						if (count == 1)
						{
							trainNa[1] = ptr->getTrainName();
						}
						else trainNa[2] = ptr->getTrainName();
					}
					else
					{
						ptr = ptr->next;
					}
				}
				cout << "Choose the Option:";
				cin >> option3;
				switch (option3)
				{
				case 1:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[1])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in " << trainNa[1] << " Reserved Successfully!\n";
						}
						else
						{
							rptr = rptr->next;
						}
					}
				}
					break;
				case 2:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr1 = upTrain; int  m, n;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr1->getTrainName() == trainNa[2])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr1->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr1->setAvailableTickets(m);
							cout << "Ticket in" << trainNa[2] << " Reserved Successfully!\n";
						}
						else
						{
							rptr1 = rptr1->next;
						}
					}
					break;
				}
				default:
					cout << "Your input is inValid. Try again!;\n";
					break;
				}
				break;
			}
			case 2:
			{
				cNode* ptr = upTrain;
				string trainNa[2];
				int count = 0, option3;
				cout << "Select the Train From Following\n";
				cout << "Sr. No" << setw(15) << "Train Name" << setw(15) << "Route" << setw(15) << "Fare" << setw(15) << "Time" << setw(15) << "Seats Available" << endl;
				for (int i = 0; i < getCountTrain(); ++i)
				{
					if (ptr->getTrainRoute() == "Lahore to Islamabad")
					{
						cout << count++ << setw(15) << ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getFare() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getAvailableTickets() << endl;
						if (count == 1)
						{
							trainNa[1] = ptr->getTrainName();
						}
						else trainNa[2] = ptr->getTrainName();
					}
					else
					{
						ptr = ptr->next;
					}
				}
				cout << "Choose the Option:";
				cin >> option3;
				switch (option3)
				{
				case 1:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[1])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in " << trainNa[1] << " Reserved Successfully!\n";
						}
						else
						{
							rptr = rptr->next;
						}
					}
					break;
				}
				case 2:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr2 = upTrain; int m, n;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr2->getTrainName() == trainNa[2])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr2->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr2->setAvailableTickets(m);
							cout << "Ticket in" << trainNa[2] << " Reserved Successfully!\n";
						}
						else
						{
							rptr2 = rptr2->next;
						}
					}
					break;
				}
				default:
					cout << "Your input is inValid. Try again!;\n";
					break;
				}
				break;
			}
			case 3:
			{
				cNode* ptr = upTrain;
				string trainNa[2];
				int count = 0, option3;
				cout << "Select the Train From Following\n";
				cout << "Sr. No" << setw(15) << "Train Name" << setw(15) << "Route" << setw(15) << "Fare" << setw(15) << "Time" << setw(15) << "Seats Available" << endl;
				for (int i = 0; i < getCountTrain(); ++i)
				{
					if (ptr->getTrainRoute() == "Karachi to Lahore")
					{
						cout << count++ << setw(15) << ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getFare() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getAvailableTickets() << endl;
						if (count == 1)
						{
							trainNa[1] = ptr->getTrainName();
						}
						else trainNa[2] = ptr->getTrainName();
					}
					else
					{
						ptr = ptr->next;
					}
				}
				cout << "Choose the Option:";
				cin >> option3;
				switch (option3)
				{
				case 1:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[1])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in " << trainNa[1] << " Reserved Successfully!\n";
						}
						else
						{
							rptr = rptr->next;
						}
					}
					break;
				}
				case 2:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[2])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in" << trainNa[2] << " Reserved Successfully!\n";
						}
						else
						{
							rptr = rptr->next;
						}
					}
					break;
				}
				default:
					cout << "Your input is inValid. Try again!;\n";
					break;
				}
				break;
			}
			case 4:
			{
				cNode* ptr = upTrain;
				string trainNa[2];
				int count = 0, option3;
				cout << "Select the Train From Following\n";
				cout << "Sr. No" << setw(15) << "Train Name" << setw(15) << "Route" << setw(15) << "Fare" << setw(15) << "Time" << setw(15) << "Seats Available" << endl;
				for (int i = 0; i < getCountTrain(); ++i)
				{
					if (ptr->getTrainRoute() == "Islamabad to Lahore")
					{
						cout << count++ << setw(15) << ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getFare() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getAvailableTickets() << endl;
						if (count == 1)
						{
							trainNa[1] = ptr->getTrainName();
						}
						else trainNa[2] = ptr->getTrainName();
					}
					else
					{
						ptr = ptr->next;
					}
				}
				cout << "Choose the Option:";
				cin >> option3;
				switch (option3)
				{
				case 1:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[1])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in " << trainNa[1] << " Reserved Successfully!\n";
						}
						else
						{
							rptr = rptr->next;
						}
					}
					break;
				}
				case 2:
				{
					cout << "Enter the Number of Tickects for Reservation:";
					cin >> numOfTickect;
					cNode* rptr = upTrain; int n, m;
					for (int i = 0; i < getCountTrain(); ++i)
					{
						if (rptr->getTrainName() == trainNa[2])
						{
							if (topPassenger)
							{
								passengeerPtr->nextP = topPassenger;
								topPassenger = passengeerPtr;
							}
							else
							{
								topPassenger = passengeerPtr;
							}
							passengeerPtr->setTickects(numOfTickect);
							n = m = rptr->getAvailableTickets();
							for (int i = 0; i < numOfTickect; ++i) { n--; }
							m = m - n;
							rptr->setAvailableTickets(m);
							cout << "Ticket in" << trainNa[2] << " Reserved Successfully!\n";
							cout << "Your Total Bill for " << numOfTickect << " is :Rs " << numOfTickect * rptr->getFare() << endl;
						}
						else
						{
							rptr = rptr->next;
						}
					}
					break;
				}
				default:
					cout << "Your input is inValid. Try again!;\n";
					break;
				}
				break;
			}
			default:
				cout << "Your input is inValid. Try again!;\n";
				break;
			}

}

void PassengerList::cancelBooking(string id)
{
	int option;
	string name, name2;
	cNodePassenger* pptr = topPassenger;
	cout << "Select the Train to Cancel the Booking\n";
	cNode* ptr = upTrain; int count = 0;
	cout << "Sr. No" << setw(15) << "Train Name" << setw(15) << "Route" << setw(15) << "Time" << setw(15) << "Fare" << setw(15) << "Available Seats" << endl;
	for (int i = 0; i <getCountTrain(); ++i)
	{
		cout << count++ << setw(15) << ptr->getTrainName() << setw(15) << ptr->getTrainRoute() << setw(15) << ptr->getTrainTiming() << setw(15) << ptr->getFare() << setw(15) << ptr->getAvailableTickets() << endl;
		ptr = ptr->next;
	}
	cout << "Choose the option:";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		name[0] = 1;
		name[1] = 1;
		name[2] = 'u';
		break;
	}
	case 2:
	{
		name[0] = 1;
		name[1] = 2;
		name[2] = 'u';
		break;
	}
	case 3:
	{
		name[0] = 1;
		name[1] = 3;
		name[2] = 'u';
		break;
	}
	case 4:
	{
		name[0] = 1;
		name[1] = 4;
		name[2] = 'u';
		break;
	}
	case 5:
	{
		name[0] = 2;
		name[1] = 1;
		name[2] = 'd';
		break;
	}
	case 6:
	{
		name[0] = 2;
		name[1] = 2;
		name[2] = 'd';
		break;
	}
	case 7:
	{
		name[0] = 2;
		name[1] = 3;
		name[2] = 'd';
		break;
	}
	case 8:
	{
		name[0] = 1;
		name[1] = 4;
		name[2] = 'd';
		break;
	}
	default:
		cout << "You Choose the wrong Option\n";
		break;
	}

		cNode* ptr2 = upTrain;
		int n, m;
		cout << "Enter Number of Seats to Cancel:";
		cin >> m;
		for (int i = 0; i < getCountTrain(); ++i)
		{
			name2 = ptr2->getTrainName();
			if (name[0] == name2[0])
			{
				if (name[1] == name[1])
				{
					cNodePassenger* bpptr;
					for (int i = 0; i < countPassenger; ++i)
					{
						bpptr = pptr;
						if (pptr->getPassengerId() == id)
						{
							bpptr->nextP = pptr->nextP;
							n = ptr2->getAvailableTickets();
							n = n + m;
							ptr2->setAvailableTickets(n);
							n = pptr->getTickects();
							n = n - m;
							pptr->setTickects(n);
							delete pptr;
							cout << "Tickects Cancel Successfuly\n";
						}
						else
						{
							pptr = pptr->nextP;
						}
					}
				}
				else
				{
					ptr2 = ptr2->next;
				}
			}		
			else
			{
				ptr = ptr->next;
			}
		}
}

void PassengerList::PassengerBill(string id)
{

	cNodePassenger* pptr = topPassenger;
	for (int i = 0; i < countPassenger; ++i)
	{
		if (pptr->getPassengerId() == id)
		{
			cout << "Your Total Bill is: " << pptr->getTickects()*1300<<endl;
		} 
		else
		{
			pptr = pptr->nextP;
		}
	}
}

PassengerList::PassengerList()
{
	cNodePassenger* pptr = topPassenger;
	int count = 0;
	cout << "Sr No." << setw(15) << "Passenger Name" << setw(15) << "Passenger ID" << setw(15) << "Passenger Tickects" << endl;
	for (int i = 0; i < countPassenger; ++i)
	{
		cout << i++ << setw(15) << pptr->getPassengerName() << setw(15) << pptr->getPassengerId() << setw(15) << pptr->getTickects() << endl;
		pptr = pptr->nextP;
	}
}


PassengerList::~PassengerList()
{
}
