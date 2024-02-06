/*
* Author : Darin Pierce
* Date created : 10/31/2023
* Date modified :
* Purpose : Program sums, averages, and finds the lowest and highest number in an array.


*/

#include<iostream>
#include<string>
using namespace std;

int sum(int[], const int&);
double avg(int[], const int&);
int lowest(int[], const int&);
int highest(int[], const int&);

int main() 
{
	const int SIZE = 5;
	int values[SIZE] = { 2, 213, 304, -17, 130 };
	//Displays sum average lowest and highest.
	cout << "Sum is " << sum(values, SIZE) << endl;
	cout << "Average of positives is " << avg(values, SIZE) << endl;
	cout << "Lowest is " << lowest(values, SIZE) << endl;
	cout << "Highest is " << highest(values, SIZE) << endl;

	system("pause");
	return 0;
}
//Sum function
int sum(int array[], const int& SIZE)
{
	int total = 0;

	for (int i = 0; i < SIZE; i++)
	{
		total += array[i];
	}
	return total;
}
//Avg of positves function
double avg(int array[], const int& SIZE)
{
	double total = 0;
	int count = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (array[i] >= 0)
		{
			count++;
			total += array[i];
		}
	}
	return (total * 1.0) / count;
}
//Lowest number finder function
int lowest(int array[], const int& SIZE)
{
	int lowest = array[0];
	for (int i = 1; i < SIZE; i++)
	{
		
		if (array[i] < lowest)
		{
			lowest = array[i];
		}
	}
	return lowest;

}
//Highest number finder function.
int highest(int array[], const int& SIZE)
{
	int highest = array[0];
	for (int i = 1; i < SIZE; i++)
	{
		if (array[i] > highest)
		{
			highest = array[i];
		}
	}
	return highest;
}


