/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
*/
#include<iostream>
using namespace std;

int sec = 0;
int mins = 0;
int hour = 0;
int days = 1;
int month = 1;
int year = 1970;
int dayOrSec;
const int DAY = 86400;
const int SEC = 1;

bool leapYear(int year) {

	bool flag = 0;

	if (year % 4 == 0)
		flag = 1;
	if (year % 100 == 0)
		flag = 0;
	if (year % 400 == 0)
		flag = 1;

	return flag;
}

void convertToDate(long long int number){

	// dayOrSec = DAY if i > 86400 (seconds in one day) and = SEC if i < 86400
	for (long long int i = number; i >= 0;i -=dayOrSec)
	{
		if (i == 0)
		{
			cout << ((days <= 9) ? "0" : "") << days << ".";
			cout << ((month <= 9) ? "0" : "") << month << ".";
			cout << year << " ";
			cout << ((hour <= 9) ? "0" : "") << hour << ":";
			cout << ((mins <= 9) ? "0" : "") << mins << ":";
			cout << ((sec <= 9) ? "0" : "") << sec;
		}
		else
		{
			// This is performed if there is no full day( 86400 seconds ) in 'i' 
			if (i < DAY)
			{
				sec++;
				if (sec % 60 == 0)
				{
					mins++;
					sec = 0;
				}

				if (mins % 60 == 0 && mins > 0)
				{
					hour++;
					mins = 0;
				}
				dayOrSec = SEC;
			}
			// This is performed if there is full day( 86400 seconds ) in 'i'
			else
			{
				hour = 24;
				dayOrSec = DAY;

				if (hour % 24 == 0 && hour > 0)
				{
					days++;
					hour = 0;
				}

				// Check for leap year
				if (leapYear(year) && month == 2)
				{
					if (days % 30 == 0)
					{
						month++;
						days = 1;
					}
				}
				else if (month == 2)
				{
					if (days % 29 == 0)
					{
						month++;
						days = 1;
					}
				}
				else
				{
					switch (month) {
					case 1:
					case 3:
					case 5:
					case 7:
					case 8:
					case 10:
					case 12:
						if (days % 32 == 0)
						{
							month++;
							days = 1;
						}
						break;
					case 4:
					case 6:
					case 9:
					case 11:
						if (days % 31 == 0)
						{
							month++;
							days = 1;
						}
						break;
					}
				}

				if (month % 13 == 0)
				{
					year++;
					month = 1;
				}
			}
		}
	}
}

int main()
{
	long long int number;
	cin >> number;

	if (number < 0)
		cout << -1;
	else
		convertToDate(number);


	return 0;
}