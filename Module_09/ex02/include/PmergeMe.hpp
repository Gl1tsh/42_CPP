#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>
#include <vector>

class PmergeMe
{
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& source);
	PmergeMe& operator=(const PmergeMe& source);

	void processList(std::list<int>& numbers);
	void processVector(std::vector<int>& numbers);


private:

	void splitList(std::list<int>& numbers, std::list<int>& leftPart, std::list<int>& rightPart);
	std::list<int> mergeLists(std::list<int>& leftPart, std::list<int>& rightPart);

	void splitVector(std::vector<int>& numbers, std::vector<int>& leftPart, std::vector<int>& rightPart);
	std::vector<int> mergeVector(std::vector<int>& leftPart, std::vector<int>& rightPart);

};

#endif