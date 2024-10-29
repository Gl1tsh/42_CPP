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

	void processList(std::list<int>& numbers);


private:
	std::list<int> numbers;
	std::list<std::pair<int, int> > pairs;


	void splitList(const std::list<int>& numbers, std::list<int>& leftPart, std::list<int>& rightPart);
	std::list<int> mergeLists(const std::list<int>& leftPart, const std::list<int>& rightPart);

};

#endif