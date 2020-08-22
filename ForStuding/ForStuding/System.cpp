#include "mainHeader.h"
#include <iostream>
#include <fstream>
#include <stdio.h>

using namespace std;

void calculator()
{
	int input = 0;
	cout << "\n------------------------------------------\n";
	cout << "Hi to Calculsam for maths!" << endl;
	cout << "Please choose what you want to do from the list:" << endl;
	cout << "\n1 - Calculate Square Area.\n";
	cout << "2 - Calculate Square Volume.\n";
	cout << "3 - Calculate Cicle Area.\n";
	cout << "4 - Calculate Cicle Volume.\n";
	cout << "5 - Calculate Sphere Area.\n";
	cout << "6 - Calculate Sphere Volume.\n";
	cout << "0 - To EXIT\n";
	cout << "Your choose : ";
	cin >> input;
	cout << "\n------------------------------------------\n";

	do {
		switch (input)
		{
		case 1:
			CalcSquareArea();
			break;
		case 2:
			CalcSquareVolume();
			break;
		case 3:
			CalcCircleArea();
			break;
		case 4:
			CalcCircleVolume();
			break;
		case 5:
			CalcSphereArea();
			break;
		case 6:
			CalcShpereVolume();
			break;
		default:
			cout << "\nThis is a invalid input!\nTry Again." << endl;
			break;
		}
		cout << "\n------------------------------------------\n";
		cout << "Hi to Calculsam for maths!" << endl;
		cout << "Please choose what you want to do from the list:" << endl;
		cout << "\n1 - Calculate Square Area.\n";
		cout << "2 - Calculate Square Volume.\n";
		cout << "3 - Calculate Cicle Area.\n";
		cout << "4 - Calculate Cicle Volume.\n";
		cout << "5 - Calculate Sphere Area.\n";
		cout << "6 - Calculate Sphere Volume.\n";
		cout << "0 - To EXIT\n";
		cout << "Your choose : ";
		cin >> input;
		cout << "\n------------------------------------------\n";
	} while (input != 0);

}


void Gaming()
{
	int input;
	cout << "\n------------------------------------------\n";
	cout << "Hi to Maxi Game" << endl;
	cout << "This game is about who get the max number, it could play to 3-5-10 Points! " << endl;
	cout << "Choose for how many Points you want to play: " << endl;
	cout << "\n1 - <3>  Points\n";
	cout << "\n2 - <5>  Points\n";
	cout << "\n3 - <10> Points\n";
	cout << "0 - To EXIT\n";
	cout << "Your choose : ";
	cin >> input;
	cout << "\n------------------------------------------\n";
	do {
		switch (input)
		{
		case 0 :
			cout << "Exiting...!" << endl;
			break;
		case 1:
			cout << "You choose 3 Rounds\n\t lets start!" << endl;
			PointsGame(3);
			break;
		case 2:
			cout << "You choose 5 Rounds\n\t lets start!" << endl;
			PointsGame(5);
			break;
		case 3:
			cout << "You choose 10 Rounds\n\t lets start!" << endl;
			PointsGame(10);
			break;
		default:
			cout << "Invalid Input!! , try again" << endl;
			break;
		}
		cout << "\n------------------------------------------\n";
		cout << "Hi to Maxi Game" << endl;
		cout << "This game is about who get the max number, it could play to 3-5-10 Points! " << endl;
		cout << "Choose for how many Points you want to play: " << endl;
		cout << "\n1 - <3>  Points\n";
		cout << "\n2 - <5>  Points\n";
		cout << "\n3 - <10> Points\n";
		cout << "0 - To EXIT\n";
		cout << "Your choose : ";
		cin >> input;
		cout << "\n------------------------------------------\n";

	} while (input != 0);

}

void WriteLetter()
{
	string text;
	int status;

	status = remove("C:\\Users\\fadib\\Documents\\yourFile.txt");
	if (status == 0)
	{
		cout << "file deleted successfully..!!\n";
	}
	else
	{
		cout << "Unable to delete file\n";
		perror("Error Message ");
	}
	cout << "Welcome to the writing section, write any thing and we will save it in txt file in your computer" << endl;
	ofstream fs("C:\\Users\\fadib\\Documents\\yourFile.txt");


	if (!fs)
	{
		std::cerr << "Cannot open the output file." << std::endl;
		return;
	}
	cin.ignore();
	getline(cin, text);
	fs << text << endl;
	fs.close();
}

void PlayWithStrings()
{
	cout << "Hey To StringX\nPlease choose your way:" << endl;
	cout << "1 - Counts letter in given string" << endl;
	int input;
	cin >> input;
	switch (input)
	{
	case 1 :
		countStringLetters();
		break;
	default:
		cout << "Invalid input!" << endl;

	}


}