/**
*
* Solution to homework assignment 2
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
*
*/
#include<iostream>
using namespace std;

bool hasAlternatingBits(unsigned n);

int main()
{
	long number;
	cin >> number;

	if (number < 0)
		cout << -1;
	else {
		if (hasAlternatingBits(unsigned(number)) == 1)
			cout << "true";
		else
			cout << "false";
	}

	return 0;
}

bool hasAlternatingBits(unsigned n) {

	int binaryNum[50];

	int i = 0;

	while (n > 0) {
		binaryNum[i] = n % 2;
		n = n / 2;
		i++;
	}

	bool flag = true;

	for (int j = 0; j < i - 2; j++) {
		if (binaryNum[j] == binaryNum[j + 1])
			flag = false;
	}

	return flag;
}