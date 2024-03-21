
#include"Foo.h"





set<int> Intersection(int min, int max, bool IsMinIncluded, bool IsMaxIncluded, set<int>inputSet) {
	int i, j;
	set<int> outputSet;

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


