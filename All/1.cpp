#include<iostream>
#include<windows.h>
using namespace std;

void displayWelcomeMessage()
{
    system("cls");
    cout << "\\    /  |\\     /| |-----\n";
    Sleep(120);
    cout << " \\  /   | \\   / | |_____\n";
    Sleep(120);
    cout << "  \\/    |  \\ /  |  _____|\n";
    Sleep(120);
    cout << "\n\n\t\t\tWelcome to the Vehicle Management System\n\n";
}

int main()
{
	displayWelcomeMessage();
	return 0;
}
