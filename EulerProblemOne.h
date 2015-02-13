#include "EulerProblem.h"

class EulerProblemOne : public EulerProblem
{
public:
	void PrintProblem() override;
	void PrintAnswer() override;
	int Solve() override;
};