#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <list>

class PmergeMe
{
public:
	PmergeMe();
	~PmergeMe();
	PmergeMe(const PmergeMe& source);
	PmergeMe& operator=(const PmergeMe& source);

	void setNumbers(const std::list<int>& nums);
	void splitArray();
	void mergeArray();
	void comparePairs();
	void sortArray();
	void printArray();


private:
	std::list<int> numbers;
	std::list<std::pair<int, int> > pairs;


};

#endif