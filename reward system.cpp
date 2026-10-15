#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int years;

	cout << "Enter the number of years: ";
	cin >> years;

	if (years <= 0 || years > 92)
	{
		cout << "Please enter a number of years between 1 and 92." << endl;
		return 0;
	}

	vector<long long> rewards(years);

	rewards[0] = 1;

	if (years > 1)
	{
		rewards[1] = 1;
	}

	for (int i = 2; i < years; i++)
	{
		rewards[i] = rewards[i - 1] + rewards[i - 2];
	}

	cout << "\nCUSTOMER LOYALTY REWARDS\n";

	for (int i = 0; i < years; i++)
	{
		cout << "Year " << i + 1
			 << ": " << rewards[i]
			 << " points" << endl;
	}

	return 0;
}
