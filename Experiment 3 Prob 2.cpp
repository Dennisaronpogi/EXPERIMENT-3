//Create a C++ Program that store temperature of Province A, Province B and Province C for a week
//(seven days) and display it. 
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int provA[7];
	int provB[7];
	int provC[7];
	
	cout << "Enter Temperature" << endl;
	
	for (int i = 0; i < 7; i++)
	{
		cout << "Province A, Day " << i+1 << ": " ;
		cin >> provA[i];
	}
	
		for (int i = 0; i < 7; i++)
	{
		cout << "Province B, Day " << i+1 << ": " ;
		cin >> provB[i];
	}
	
		for (int i = 0; i < 7; i++)
	{
		cout << "Province C, Day " << i+1 << ": " ;
		cin >> provC[i];
	}
	
	
	
	_getch();
	return 0;
}
