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

int brokenCalc(int startValue, int target) {
	int actions = 0;

	if (startValue < target)
	{
		while (target > startValue)
		{
			actions++;

			if (target % 2 == 1)
				target++;
			else
				target /= 2;
		}

		return actions + startValue - target;
	}
	else
	{
		return startValue - target;
	}
}

int main()
{
	int startValue, target;
	cin >> startValue >> target;

	if (startValue < 1)
		cout << -1;

	cout << brokenCalc(startValue, target);

	return 0;
}