#include<iostream>
#include<fstream>
#include<string>
#include<cstring>
#include<iomanip>
#include<cmath>
#include"TrainList.h"
#include"PassengerList.h"
using namespace std;
void getPassword(string adminNamList[],string passwordList[],int contAdmin)
{
	ifstream input;
	string line, line1;
	input.open("Admin_Passwords.txt");
	if (input.is_open())
	{
		for (int i = 0; !input.eof(); ++i)
		{
			getline(input, line, ',');
			adminNamList[i] = line;

			getline(input, line1);
			passwordList[i] = line1;
			contAdmin++;

		}
	}
	else
	{
		cout << "Unable to Open 'Admin_Passwords' file\n";
	}
	input.close();
}
int main()
{
	TrainList train;
	PassengerList pasenger;
	string passwordArray[3] = { "rehman786","zargham786","nauman786" }, trainNam, trainTime, trainRout, name, password;
	string adminArray[3] = { "Rehman","Zargham","Nauman" };
	int countAdmin = 0, far = 0, availableTickt = 0, option, option1,option2;
	//getPassword(adminArray, passwordArray, countAdmin);
	for (int i = 0; i < 3; ++i)
	{
		cout << adminArray[i] << " pass " << passwordArray[i] << endl;
	}
	cout << "*********************************************************************" << endl;
	cout << "			Welcome to Train Reservation System						  " << endl;
	cout << "*********************************************************************" << endl<<endl;
	cout << "Please choose the Login\n";
	cout << "1.	Login as Admin\n";
	cout << "2.	Login as Passenger\n";
	cout << "Choose the option:";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		bool valid = false;
		cout << "Dear User, current software is intended for authorized users only.\n Login to the system to get access. \n" << endl;
		
		cout << "Enter Your Name:";
		cin >> name;
		cout << "Enter Your Password:";
		cin >> password;
		for (int i = 0; i < 3; ++i)
		{
			if (adminArray[i] == name && passwordArray[i] == password)
			{
				valid = true;
				break;
			}
		}
		if (valid==true)
		{
			do {
				cout << "*********************************************************************" << endl;
				cout << "			Welcome in Train Reservation System	As Admin			  " << endl;
				cout << "*********************************************************************" << endl << endl;

				cout << "Select the Following Options\n";
				cout << "1.	Add New Train\n";
				cout << "2.	Delete Existing Train\n";
				cout << "3.	View All Trains\n";
				cout << "4.	Edit Existing Train\n";
				cout << "5.	View Sold Tickects\n";
				cout << "6.	View Total Sale\n";
				cout << "7.	Total Trains\n";
				cout << "8.	Exist\n";
				cout << "Choose the Option:";
				cin >> option1;
				switch (option1)
				{
				case 1:
				{
					getline(cin, trainNam);
					cout << "\nEnter the Name of Train in formate (11up-Allama Iqbal Express) :";
					getline(cin, trainNam);
					cout << "\nEnter the Timing of Train in formate(00:00) :";
					getline(cin, trainTime);
					cout << "\nEnter the Route of Train in formate( Lahore to Karachi) :";
					getline(cin, trainRout);
					cout << "\nEnter the fare of Train :";
					cin >> far;
					cout << "\nEnter the Available Seats of Train :";
					cin >> availableTickt;
					train.addTrain(trainNam, trainRout, trainTime, far, availableTickt);
					break;
				}
				case 2:
				{
					getline(cin, trainNam);
					cout << "Enter the Name of Train to Remove in formate (11up-Allama Iqbal Express) :";
					getline(cin, trainNam);
					train.deleteTrain(trainNam);
					break;
				}
				case 3:
				{
					train.printTrain();
					
					break;
				}
				case 4:
				{
					getline(cin, trainNam);
					cout << "Enter the Train Name to Edit in formate (11up-Allama Iqbal Express) :";
					getline(cin, trainNam);
					train.editExistingTrain(trainNam);
					break;
				}
				case 5:
				{
					train.viewSoldTickect();
					break;
				}
				case 6:
				{
					train.viewTotalSale();
					break;
				}
				case 7:
				{
					train.getCountTrain();
					break;
				}
				case 8:
				{
					break;
				}
				default:
					cout << "Choose the Valid Option!.\n";
					break;
				}
			} while (option1 != 8);
		}
		else
		{
			cout << endl<<"Username or Password does'nt match\n";
			
		}
		break;
	}
	case 2:
	{
		do {
			cout << "*********************************************************************" << endl;
			cout << "			Welcome in Train Reservation System	As Passenger			  " << endl;
			cout << "*********************************************************************" << endl << endl;
			
			cout << "Dear User, current software is intended for authorized users only.\n Login to the system to get access. \n" << endl;
			getline(cin, name);
			cout << "Enter Your Name :";
			getline(cin, password);
			cout << "Enter Your CNIC Number :";
			

			cout << "Select the Following Options\n";
			cout << "1.	Reserve the Tickect\n";
			cout << "2.	Cancel the Tickect\n";
			cout << "3.	View Total Bill\n";
			cout << "4.	Exist\n";
			cout << "Choose the Option:";
			cin >> option2;
			switch (option2)
			{
			case 1:
			{
				pasenger.newBooking(name,password);
			}
			case 2:
			{
				pasenger.cancelBooking(password);
			}
			case 3:
			{
				pasenger.PassengerBill(password);
			}
			case 4:
			{
				break;
			}
			default:
				cout << "Your input is inValid!.\n";
				break;
			}
		} while (option2 != 4);
	}
	default:
		cout << "Choose the Valid Option!.\n";
	}
	return 0;
}