#include <iostream>
using namespace std;

long long fibonacci(int n)
{
	if (n <= 1)
	{
		return n;
	}

	return fibonacci(n - 1) + fibonacci(n - 2);
}

int main()
{
	int n;

	cout << "Enter a number: ";
	cin >> n;

	if (n < 0 || n > 92)
	{
		cout << "Please enter a number between 0 and 92." << endl;
		return 0;
	}

	cout << "Fibonacci number: " << fibonacci(n) << endl;

	return 0;
}
