// Lab 1.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>

#include <iostream>
#include <sstream>

using namespace std;

// function to check if the value is number
bool isNumber(string s)
{
    std::stringstream ss(s);
    float x;
    return (ss >> x) && ss.eof();
}
int main()
{
	int choice = 0;

	string name = "";
	// this should be an int
	//string age = "";
	// to fix change string to int and change it's default value to null
	int age = 0;
	// occupation  has misspelling that's my vs editor told me
	string occupation = "";

	while (choice != -1)
	{
		// reset value
		string input= "";
		choice= 0;

		cout << "-1: Exit\n" << endl;
		cout << "1: Enter Name\n" << endl;
		cout << "2: Enter age\n" << endl;
		cout << "3: Enter Occupation\n" << endl;
				
		// this cin get the input as a number so it may case error if the user input a text by mistake
		//cin >> choice;
		
		// while getline function read the whole line as a string
		getline(cin,input);
		
		// after reading the line we have to make sure that's it's a Number
		if (isNumber(input))
		{
			// if it's a number it will convert it to integer and give it's value to choice 
			choice = stoi(input);
		};
		
		// that was commented so this is way it wasn't working when inputting -1 
		if (choice == -1)
			break;

		switch (choice)
		{
		case 1:
			cout << "What is your Name: ";
			getline(cin, name);
			break;
		case 2:
			cout << "What is your Age? ";
			getline(cin,input);
			if (isNumber(input))
			{
				// if it's a number it will convert it to integer and give it's value to age 
				age = stoi(input);
			}
			else // if it's not an integer it will print erro message.
			{
				cout << "that wasn't an integer!\n";
			};
			

			break;
		case 3:
			cout << "What is your Occupation? ";
			getline(cin, occupation);
			break;
		default:
			// Assume Invalid Menu Choice
			cout << "Sorry that choice is not valid!";
			continue;
		}
	}

	age += 1;

	cout << "Thank you for using our application, " << name << " and hope your career in " << occupation << " is successful.";
	cout << "Hope your " << age << " birthday will enjoyable and exciting";
	cout << "press enter to close the app!";
	cin >> occupation;
	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
