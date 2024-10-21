#include <iostream>
#include <random>

using namespace std;

int main()
{
	srand((unsigned)time(NULL));

	int tmp;
	const int ARRAY_SIZE = 5;
	int arr[ARRAY_SIZE] = {1,2,3,4,5};

#ifdef _DEBUG

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << "DEBUG" << endl;
	cout << endl;

#endif // _DEBUG

	
	for (int i = ARRAY_SIZE - 1; i > 0; i--)
	{
		int j = rand() % (i + 1);

		tmp = arr[i];
		arr[i] = arr[j];
		arr[j] = tmp;
	}

	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << arr[i] << endl;
	}
}
