class EulerProblem
{
public:
	virtual void PrintProblem() = 0;
	virtual void PrintAnswer() = 0;
	virtual int Solve() = 0;
};