#include <iostream>
using namespace std;

int main()
{
	const int size = 3;
	int array[size][size] = { {0,1,2}, {1,2,3}, {2,3,4} };

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			cout << " " << array[i][j];
		}
			cout << endl;
	}
	cout << endl;

	int x = 16 %  size;
	int sum = 0;
	for (int i = 0; i < size; i++)
		sum = sum + array[i][x];
	cout << " " << sum;

	return 0;
}