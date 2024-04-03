#include<iostream>
#include "../Func/Foo.h"
#include"../Func/IntersectionTester.h"



using namespace std;
//to be able commit


int main() {
	set<int> TestSet = { -4,-5,-3,-2, 1,2,3,4,5,6,15,30,34,566 };


	set<int> testOutput1 = Intersection(-3, 15, true, true, TestSet);
	set<int> testOutput2 = Intersection(-3, 15, false, true, TestSet);
	set<int> testOutput3 = Intersection(-3, 15, true, false, TestSet);
	set<int> testOutput4 = Intersection(-3, 15, false, false, TestSet);

	printSet(testOutput1);
	printSet(testOutput2);
	printSet(testOutput3);
	printSet(testOutput4);





	set<int>EstimatedSet1 = { -3,-2, 1,2,3,4,5,6,15 };

	set<int>EstimatedSet2 = { -2,1, 2,3,4,5,6,15 };
	

	// tu specjalnie popelnilem blad  aby pokazac ze testy dzialaja
	// jesli z EstimatedSet3 zabrac liczbe 44 , wszstko bedzie dzialac

	set<int>EstimatedSet3 = { -3,-2,1, 2,3,4,5,6,44 };
	
	set<int>EstimatedSet4 = { -2,1, 2,3,4,5,6 };



	IntersectionTester intersectionTester;

	intersectionTester.validate(testOutput1, EstimatedSet1);
	intersectionTester.validate(testOutput2, EstimatedSet2);
	intersectionTester.validate(testOutput3, EstimatedSet3);
	intersectionTester.validate(testOutput4, EstimatedSet4);

	

	return 0;
}