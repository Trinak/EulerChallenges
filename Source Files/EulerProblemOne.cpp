#include <string>
#include <iostream>
#include <vector>
#include <numeric>
#include "EulerProblemOne.h"

using namespace std;

void EulerProblemOne::PrintProblem()
{
	string problem = "If we list all the natural numbers below 10 that are multiples of 3 or 5, "
		"we get 3, 5, 6 and 9. The sum of these multiples is 23.\n"
		"Find the sum of all the multiples of 3 or 5 below 1000.\n";

	cout << problem;
}

void EulerProblemOne::PrintAnswer()
{
	int answer = Solve();

	cout << "Answer: " << answer << "\n";
}

int EulerProblemOne::Solve()
{
	int answer = 0;
	vector<int> numbers{}; 

	for (int i = 1; i < 1000; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			numbers.push_back(i);
		}
	}

	answer = accumulate(numbers.begin(), numbers.end(), 0);

	return answer;
}