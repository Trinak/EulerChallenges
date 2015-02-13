#include <stdlib.h>
#include <iostream>
#include "EulerProblemOne.h"

using namespace std;

int main()
{
	int problemNumber;

	cout << "Input desired problem number.\n";
	cin >> problemNumber;

	//For now
	EulerProblemOne problem{EulerProblemOne()};

	problem.PrintProblem();
	problem.PrintAnswer();

	system("pause");
	return 0;
}