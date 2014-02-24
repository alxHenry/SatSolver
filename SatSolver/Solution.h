#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>

class Solution {
public:
	Solution(int numVars);
	Solution(const Solution & inSol);
	Solution(std::vector<bool> inVars);

	int getFitness();
	void setFitness(int inFit);
	bool getIndex(int index);
	std::vector<bool> & getVarsRef();
	std::vector<bool> getVarsCopy();
	void mutateVars(double mutateProb);

	void printSolution();

private:
	std::vector<bool> vars;
	int fitness;
};

#endif