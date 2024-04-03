#include "IntersectionTester.h"

int IntersectionTester::TestCounter = 0;

IntersectionTester::IntersectionTester()
{
}


bool IntersectionTester::validate(const std::set<int>& OutputSet, const std::set<int>& EstimatedSet)
{
	
	if (OutputSet == EstimatedSet) {

		std::cout << "--------------------------\n\nThe " << ++TestCounter << " test is valid.\n\n--------------------------" << std::endl;
		

		return 1;
	}
	else {
		std::cout << "--------------------------\n\nThe " << ++TestCounter << " test isnt valid." << std::endl;

		std::cout << "Estimated output set : ";
		for (auto it = EstimatedSet.begin(); it != EstimatedSet.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << "\n\nYour output : ";
		for (auto it = OutputSet.begin(); it != OutputSet.end(); ++it) {
			std::cout << *it << " ";
		}
		std::cout << "\n\n--------------------------\n";


		return 0;
	}

}

