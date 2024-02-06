// Author: Darin Pierce
// Creation Date: 10/31/2023
// Last Modification Date:
// Purpose: Program asks for an input of an integer, then it searches an array for that number, and then displays where that number is in the array. If it
// is not in the array, it tells you.

#include<iostream>
#include<string>
using namespace std;

int searchValueInArray(int, int[], int);

int main()
{
	const int SIZE = 8;
	int value, index;
	int array[SIZE] = { 10, 60, 20, 50, 30, 40, -10, 0 };

	cout << "Please enter an integer value: ";
	cin >> value;
	//Calls function.
	index = searchValueInArray(value, array, SIZE);
	//Checks that index is not -1
	if (index != -1)
	{
		cout << "The value " << value << " exists in position " << index << " of the array." << endl;
	}
	else
	{
		cout << "Sorry, the array does not contain the value " << value << "." << endl;
	}

	system("pause");
	return 0;
}

// Author: Darin Pierce
// Creation Date: 10/31/2023
// Last Modification Date:
// Purpose: Search for a value V in the array a of integers
//          Return the position of V in the array if V is found
//          Otherwise (V not found), return -1

int searchValueInArray(int V, int a[], int size)
{

	for (int i = 0; i < size; i++)
	{
		if (a[i] == V)
		{
			return i;
		}
	}
	return -1;


}
