#include <iostream>
#include <vector>
using namespace std;

long long fibonacci(int n, vector<long long>& memo)
{
	if (n <= 1)
	{
		return n;
	}

	if (memo[n] != -1)
	{
		return memo[n];
	}

	memo[n] = fibonacci(n - 1, memo)
			  + fibonacci(n - 2, memo);

	return memo[n];
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

	vector<long long> memo(n + 1, -1);

	cout << "Fibonacci number: "
		 << fibonacci(n, memo) << endl;

	return 0;
}
