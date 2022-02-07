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

const int MAX_NUMBER = 1000000000;
const int MIN_NUMBER = 1;

bool isPalindrome(int num)
{
    int arrayDigits[100];
    int i = 0;

    while (num > 0) {
        arrayDigits[i] = num % 10;
        num /= 10;
        i++;
    }

    for (int j = 0; j < (i+1) / 2; j++)
        if (arrayDigits[j] != arrayDigits[i - 1 - j] || i <= 2)
            return false;

    return true;
}

// function return closest Palindrome number
long int closestPlandrome(int num)
{
    if (isPalindrome(num))
        return num;
    else
    {
        long int RPNum = num - 1;

        while (!isPalindrome(RPNum))
            RPNum--;

        long int SPNum = num + 1;

        while (!isPalindrome(SPNum))
            SPNum++;

        // check absolute difference
        if (abs(num - RPNum) <= abs(num - SPNum) && RPNum>100)
            return RPNum;
        else
            return SPNum;
    }
}

int main()
{
	int number;
	cin >> number;

	if (number < MIN_NUMBER || number > MAX_NUMBER)
		cout << -1;
	else
	{
        long int palindrome = closestPlandrome(number);

        cout << palindrome;
    }

	return 0;
}