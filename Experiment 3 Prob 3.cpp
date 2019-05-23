 //Create a C++ program which prints the letters in a char array in reverse order and shows the size of
//the array.
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of array: " << endl;
	cin >> size;
	string arr[size];
	int i;
	
	for (i = 0; i < size; i++)
	{
		cout << "Enter desired letters: " << endl;
		cin >> arr[i];
	}
	
	for (i = size; i >= size; i--)
	{
		cout << arr[size];
	}
	_getch();
	return 0;
}
