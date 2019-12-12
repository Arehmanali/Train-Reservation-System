#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
#include<cmath>
#include"TrainList.h"
#include"PassengerList.h"
void getPassword(string adminNamList[],string passwordList[],int contAdmin)
{
	ifstream input;
	string line;
	input.open("Admin_Passwords.txt");
	if (input.is_open())
	{
		for (int i = 0; i < !input.eof(); ++i)
		{
			getline(input,line,',');
			adminNamList[i] = line;
			getline(input, line);
			passwordList[i] = line;
			contAdmin++;
		}
	}
	else
	{
		cout << "Unable to Open 'Admin_Passwords' file\n";
	}
	input.close();
}
using namespace std;
int main()
{
	TrainList train;
	PassengerList pasenger;
	string passwordArray[100], trainNam, trainTime, trainRout;
	string adminArray[100];
	int countAdmin, far, availableTickt, option;
	getPassword(adminArray, passwordArray, countAdmin);

	cout << "*********************************************************************" << endl;
	cout << "			Welcome to Train Reservation System						  " << endl;
	cout << "*********************************************************************" << endl<<endl;
	cout << "Please choose the Login\n";
	cout << "1.	Login as Admin\n";
	cout << "2.	Login as Passenger";
	cout << "Choose the option:";
	cin >> option;
	switch (option)
	{
	case 1:
	{
		string name, password;
		bool valid = false;
		lable1:
		cout << "Dear User, current software is intended for authorized users only.\n Login to the system to get access. \n" << endl;
		cout << "Enter Your Name:";
		cin >> name;
		cout << "Enter Your Password:";
		cin >> password;
		for (int i = 0; i < countAdmin; ++i)
		{
			if (adminArray[i] == name)
			{
				if (passwordArray[i] == password)
				{
					valid = true;
					break;
				}
			}
		}
		if (valid)
		{
			cout << "*********************************************************************" << endl;
			cout << "			Welcome in Train Reservation System	As Admin			  " << endl;
			cout << "*********************************************************************" << endl << endl;

			cout << "Select the Following Options\n";
			cout << "1.	Add New Train\n";
			cout << "2.	Delete Existing Train\n";
			cout << "3.	View All Trains\n";
			cout << "4.	Edit Existing Train\n";
		}
		else
		{
			cout << "Username or Password does'nt match\n";
			goto lable1;
		}
	}
	default:
		break;
	}
	
	cout << "\nEnter the Name of Train:";
	cin >> trainNam;
	cout << "\nEnter the Timing of Train in formate(00:00) :";
	cin >> trainTime;
	cout << "\nEnter the Route of Train in formate( Lahore to Karachi):";
	cin >> trainRout;
	cout << "\nEnter the fare of Train:";
	cin >> far;
	cout << "\nEnter the Available Seats of Train:";
	cin >> availableTickt;



	cout << "Select the Following Options\n";
	cout << "1.	Book Seat\n";
	cout << "2.	Cancel Seat\n";
	cout << "3.	View Bill\n";
	cout << "3.	Exit\n";
	cout << "Choose the Option:";
}