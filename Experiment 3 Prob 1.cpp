//Create a C++ program to show the smallest and largest integer, the total, and the average of an array
//that take 10 elements only.
#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	double nums[10];
	double smallest = 0;
	double largest = 0;
	double temp = 0;
	double Total, average;
	
	for (int i = 0; i < 10; i++)
	{
		cout << "Please Enter Number " << i +1 << ": ";
		cin >> nums[i];
	}
	
	smallest = nums[0];
	largest = nums[0];
	
	for (int i = 1; i <= 10; i++)
	{
		temp = nums[i];
		if (temp < smallest)
		smallest = temp;
		
		if (temp > largest)
		largest = temp;
		
	}
		
	for (int i = 1; i <= 10; i++)
	{
		Total = Total + nums[i];
	}
	
		cout << endl;
		cout << "The average is " << Total/10 << endl;	
		cout << "The total is "<< Total << endl;
		cout << "The smallest number is : " << smallest << endl;
		cout << "The largest number is : " << largest;
	
	
	
	
	_getch();
	return 0;
}

