#include <stdio.h>
#include <iostream>
#include "mainHeader.h"

using namespace std;

int main()
{
	int input = 0;
	cout << "\n------------------------------------------\n";
	cout << "Hi to SystemX!" << endl;
	cout << "Please choose what you want to do from the list:" << endl;
	cout << "\n1 - Open Calculator.\n";
	cout << "2 - Play a game.\n";
	cout << "3 - Write a letter.\n";
	cout << "4 - Play with strings\n";
	cout << "0 - To EXIT\n";
	cout << "Your choose : ";
	cin >> input;
	cout << "\n------------------------------------------\n";

	do {
		switch (input)
		{
		case 1:
			calculator();
			break;
		case 2:
			Gaming();
			break;
		case 3:
			WriteLetter();
			break;
		case 4:
			PlayWithStrings();
			break;


		default:
			cout << "\nThis is a invalid input!\nTry Again." << endl;
			break;
		}
		cout << "\n------------------------------------------\n";
		cout << "Hi to SystemX!" << endl;
		cout << "Please choose what you want to do from the list:" << endl;
		cout << "\n1 - Open Calculator.\n";
		cout << "2 - Play a game.\n";
		cout << "3 - Write a letter.\n";
		cout << "4 - Play with strings\n";
		cout << "0 - To EXIT\n";
		cout << "Your choose : ";
		cin >> input;
		cout << "\n------------------------------------------\n";
	} while (input != 0);

	
}