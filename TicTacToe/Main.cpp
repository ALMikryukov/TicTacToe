
#include <iostream>
#include"TicTacToe.h"
using namespace std;


int main()

{
	char choice;
	do {
		run();
		cout << " Play again? (y/n) : ";
		cin >> choice;
		system("cls");
	} while (choice == 'y');

}

