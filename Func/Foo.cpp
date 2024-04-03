
#include"Foo.h"





std::set<int> Intersection(int min, int max, bool IsMinIncluded, bool IsMaxIncluded, std::set<int>inputSet) {
	int i, j;
	std::set<int> outputSet;

	if (IsMinIncluded) i = min;
	else i = min + 1;


	if (IsMaxIncluded)j = max;
	else j = max - 1;

	for (auto it = inputSet.begin(); it != inputSet.end(); ++it) {
		if (i <= *it && *it <= j) {
			outputSet.insert(*it);
		}
	}

	return outputSet;

}

void printSet(std::set<int> InputSet)
{
	for (auto it = InputSet.begin(); it != InputSet.end(); ++it) {
		std::cout << *it << " ";
	}
	std::cout << "\n\n";
}

