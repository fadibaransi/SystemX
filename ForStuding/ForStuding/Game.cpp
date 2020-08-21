#include <iostream>
#include "mainHeader.h"
#include <math.h>


using namespace std;

void PointsGame(int points)
{
	int player = 0 , computer = 0;
	int number, randnumber;
	while (player < points && computer < points)
	{
		cout << "Please choose a number between (1 - 10) : ";
		cin >> number;
		while(number <1 || number > 10)
		{
			cout << "Wrong input, please enter number in range (1 - 10)!\n";
			cout << "Please choose a number between (1 - 10) : ";
			cin >> number;
		}
		randnumber = (rand() % 10) + 1; 
		if (number > randnumber)
		{
			cout << "You win 1 point!\n";
			player++;
		}
		else if (number < randnumber)
		{
			cout << "Computer win 1 point!\n";
			computer++;
		}
		else {
			cout << "Draw, no one wins\n";
		}

		cout << "*****************************************\n";
		cout << "SCORE BOARD :\n";
		cout << "Your score : " << player << " Points" << endl;
		cout << "Computer score : " << computer << " Points" << endl;
		cout << "*****************************************\n";
	}
	if (player == points)
	{
		cout << "*****************************************\n";
		cout << "The winner is YOU!!\n";
		cout << "*****************************************\n";
	}
	else {
		cout << "*****************************************\n";
		cout << "The winner is the COMPUTER!!\n";
		cout << "*****************************************\n";
	}
	
}
