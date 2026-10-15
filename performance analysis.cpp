#include <iostream>
#include <vector>
#include <chrono>
using namespace std;
using namespace chrono;

// Recursive approach
long long recursiveFib(int n)
{
	if (n <= 1)
	{
		return n;
	}

	return recursiveFib(n - 1) + recursiveFib(n - 2);
}

// Iterative approach
long long iterativeFib(int n)
{
	if (n <= 1)
	{
		return n;
	}

	vector<long long> fib(n + 1);

	fib[0] = 0;
	fib[1] = 1;

	for (int i = 2; i <= n; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	return fib[n];
}

// Dynamic programming using memoization
long long dpFib(int n, vector<long long>& memo)
{
	if (n <= 1)
	{
		return n;
	}

	if (memo[n] != -1)
	{
		return memo[n];
	}

	memo[n] = dpFib(n - 1, memo)
			  + dpFib(n - 2, memo);

	return memo[n];
}

int main()
{
	int n = 30;
	const int repetitions = 10;

	long long result = 0;

	// Test recursion
	auto start = steady_clock::now();

	for (int j = 0; j < repetitions; j++)
	{
		result = recursiveFib(n);
	}

	auto stop = steady_clock::now();

	auto recursiveTime =
		duration_cast<nanoseconds>(stop - start).count();

	cout << "Recursive result: " << result << endl;
	cout << "Average recursive time: "
		 << recursiveTime / repetitions
		 << " nanoseconds\n\n";

	// Test iteration
	start = steady_clock::now();

	for (int j = 0; j < repetitions; j++)
	{
		result = iterativeFib(n);
	}

	stop = steady_clock::now();

	auto iterativeTime =
		duration_cast<nanoseconds>(stop - start).count();

	cout << "Iterative result: " << result << endl;
	cout << "Average iterative time: "
		 << iterativeTime / repetitions
		 << " nanoseconds\n\n";

	// Test dynamic programming
	start = steady_clock::now();

	for (int j = 0; j < repetitions; j++)
	{
		vector<long long> memo(n + 1, -1);
		result = dpFib(n, memo);
	}

	stop = steady_clock::now();

	auto dpTime =
		duration_cast<nanoseconds>(stop - start).count();

	cout << "Dynamic programming result: " << result << endl;
	cout << "Average dynamic programming time: "
		 << dpTime / repetitions
		 << " nanoseconds\n";

	return 0;
}
