#include <iostream>
using namespace std;

int main()
{
	int size;
	cout << "Enter size of array: ";
	cin >> size;

	int *arr = new int[size];
	cout << "Enter elements of array: ";
	for (int i = 0; i < size; i++)
	{
		cin >> *(arr + i);
	}
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			if (*(arr + j) > *(arr + j + 1))
			{
				int temp = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = temp;
			}
		}
	}
		if (size < 2)
		{
			cout << "Array must have at least two elements to determine the second highest number." << endl;
		}
		else
		{
			cout << "Second highest number is " << *(arr + size - 2) << endl;
		}
	
}
