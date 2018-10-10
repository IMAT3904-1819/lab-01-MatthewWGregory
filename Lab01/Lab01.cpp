// Lab01.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>


int main()
{
	int guesses = 5, maingame, randnum1, guessednumber;
	bool correct = false;
	using namespace std;

	srand(time(NULL));

	randnum1 = rand() % 100 + 1;

	cout << randnum1 << endl;


	
	cout << "Guess the number between 1 and 100, you have 5 guesses remaining" << endl;
	while (correct != true && guesses > 0) {
		
		cin >> guessednumber;

		if (guessednumber == randnum1) {
			correct = true;
			cout << "Congratulations you win!" << endl;
		}
		else if (guessednumber < randnum1)
		{
			guesses = guesses - 1;
			cout << "Your guess was too low, try a bigger number" << endl;
			cout << "and you have " << guesses << " remaining" << endl;
		}
		else if (guessednumber > randnum1)
		{
			guesses = guesses - 1;
			cout << "Your guess was too high, try a lower number" << endl;
			cout << "and you have " << guesses << " remaining" << endl;
		}
		
	}
	if (guesses == 0) {
		cout << "You didnt guess the number, you failed. Your number was: " << randnum1 << endl;
	}
	system("pause");
	return 0;

}



