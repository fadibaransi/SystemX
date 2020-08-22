#include "mainHeader.h"

void countStringWords()
{
	string str;
	cout << "Hey, Please Enter a string, and I will count the letters in this string :";
	cin.ignore();
	getline(cin,str);
	cout << "\nYour string contains " << str.length() << " Letters\chars";

}