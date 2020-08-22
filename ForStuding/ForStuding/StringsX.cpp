#include "mainHeader.h"

void changeSomeLetters(string);
void AddLetters(string);
void RemoveLetter(string);
void EditLetters(string);

void countStringLetters()
{
	string str;
	cout << "\nHey, Please Enter a string, and I will count the letters in this string :\n";
	cin.ignore();
	getline(cin,str);
	cout << "\nYour string contains " << str.length() << " Letters\chars" << endl;


	cout << "\n Do you want to make some changes in your letter ? (YES/NO)" << endl;
	string ans;
	cin >> ans;
	if (ans.compare("YES") == 0 || ans.compare("yes") == 0)
	{
		changeSomeLetters(str);
	}
	else if(ans.compare("NO") == 0 || ans.compare("no") == 0){
		cout << "\nOK, going back...";
	}
	else {
		cout << "Worng input!\nEXITING..." << endl;
		return;
	}
}


void changeSomeLetters(string str)
{
	cout << "\n Your string now is : " << str;
	cout << "\nHey, what you want to do ?" << endl;
	cout << "1 - Add letters" << endl;
	cout << "2 - Remove letters" << endl;
	cout << "3 - Edit letters" << endl;
	cout << "4 - Nothing, go back" << endl;
	cout << "You choice : ";
	int input;
	cin.ignore();
	cin >> input;

	switch (input)
	{
	case 1:
		AddLetters(str);
		break;
	case 2:
		RemoveLetter(str);
		break;
	case 3:
		EditLetters(str);
		break;
	case 4:

		break;
	default:

		break;
	}
}

void AddLetters(string str) {
	cout << "\nWhich letter you want to add and where ?";
	char ch;
	int i;
	cout << "\nletter : ";
	cin >> ch;
	cout << "\nIndex : ";
	cin >> i;
	//To check if the char and the index are legal
	if (!isalpha(ch))
	{
		cout << "\nInvalid letter!\n";
	}else if (i < 0 || i > str.length())
	{
		cout << "\nInvlid index!";
	}
	else {//every thing is alright!
		str.insert(str.begin() + i, ch);
	}
	cout << "Your String now is : " << str;
	cin;
}

void RemoveLetter(string str)
{
	cout << "\nWhich letter you want to remove?";
	char ch;
	int i;
	cout << "\nletter : ";
	cin.ignore();
	cin >> ch;
	char charArray[20];
	strcpy_s(charArray,str.c_str());
	for (int j = 0; j < str.length();j++) {
		if (charArray[j] == ch)
		{
			int d = j;
			while (charArray[d+1] != '\0')
			{
				charArray[d] == charArray[d + 1];
				d++;
			}
			charArray[d] == '\0';
		}
	}

	cout << "Your string nnow : " << charArray; 
	cin;
	
}

void EditLetters(string str)
{

}

