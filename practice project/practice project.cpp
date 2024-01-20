#include<iostream>
#include<time.h>
#include <Windows.h>
#include <stdio.h>

using namespace std;
//calss declaration

class AirTime
{
private:
	unsigned int hrs, min, sec;

public:

	AirTime() { hrs = min = sec = 0; }
	void settime();
	void disptime()const;
	
};


// member-function definition
void AirTime::settime()
{	
	//time_t ct = time(0);
	//string currenttime = ctime(&ct);
	//cout  << currenttime << endl;

		SYSTEMTIME str_t;
		GetSystemTime(&str_t);

		printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n"
			, str_t.wYear, str_t.wMonth, str_t.wDay
			, str_t.wHour, str_t.wMinute, str_t.wSecond);

	
}
void AirTime::disptime() const
{
	
	//time_t ct = time(0);
    //string currenttime = ctime(&ct);
	//cout << "time = " << currenttime << endl;
	SYSTEMTIME str_t;
	GetSystemTime(&str_t);

	printf("Year:%d\nMonth:%d\nDate:%d\nHour:%d\nMin:%d\nSecond:% d\n"
		, str_t.wYear, str_t.wMonth, str_t.wDay
		, str_t.wHour, str_t.wMinute, str_t.wSecond);
}


int main()
{
	AirTime art, dpt;
	do
	{
	cout << "\t\t\t\t******MENU*******" << endl;
	cout << "\t\t\t********************************";
	cout << endl;
	cout << endl;

	cout << "\t\t\t1 : set and display arrival time" << endl;
	cout << "\t\t\t2 : set and display departure time" << endl;
	cout << "\t\t\t3 : exit " << endl;
	int choice;
	cout << endl;
	cout << "\t\t\t********************************" << endl;
	cout << endl;
	cout << "\t\t\tselect option from 1 2 3 " << endl;
	cin >> choice;

		switch (choice)
		{
		case 1:
			
			cout << "\t\t\t********************************" << endl;
			cout << "\t\t\t1: set arrival time" << endl;
			cout << "\t\t\t2: display arrival time" << endl;
			cout << "\t\t\t3: exit " << endl;
			int option;
			cin >> option;
			switch (option)
			{
			   case 1:
				   cout << "arrival time is set at " << endl;
				    art.settime();
					break;
			   case 2:
				   cout << "arrival time " << endl;
					art.disptime();
					break;
			}
			
			break;
		case 2:
		    cout << "\t\t\t1 : set departure time carefully" << endl;
			cout << "\t\t\t2 : dispalay departure time "<< endl;
			cout << "\t\t\t3 : exit " << endl;
		    int x;
		    cin >> x;
		    switch (x) 
			{
		     case 1:
				 cout << "\t\t\tdeparture time is set at " << endl;
				 dpt.settime();
					break;
			case 2:
				cout << "\t\t\tdeparture time is set at " << endl;
					dpt.disptime();
				break;
				}
			break;
		case 3:
			exit(0);
			break;
		default:
			cout << "\t\t\tinvalid input" << endl;
		}
	} while (true);
	
	system("pause");
	return 0;
}