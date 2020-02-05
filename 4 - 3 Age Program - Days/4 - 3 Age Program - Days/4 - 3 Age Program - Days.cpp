#include <iostream>
using std::cout;

/*Define Year = 365 days
AgeDays = AgeYears * Year*/

int main()
{
	int AgeDays = 0;
	const int YEAR_DAYS = 365;
	const int AgeYears = 20;
	AgeDays = AgeYears * YEAR_DAYS;

		cout << "Drake is: \n" << AgeYears;
		cout << "\nThat is this many days: \n" << AgeDays;

	return 0;
}