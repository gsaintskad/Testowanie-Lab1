
#include "../Func/Foo.h"





int main() {
	set<int> b = { -4,-5,-3,-2, 1,2,3,4,5,6,15,30,34,566 };
	set<int> test1 = Intersection(-3, 15, 1, 1, b);
	set<int> test2 = Intersection(-3, 15, 0, 1, b);
	set<int> test3 = Intersection(-3, 15, 1, 0, b);


	for (auto it = test1.begin(); it != test1.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\n\n";


	for (auto it = test2.begin(); it != test2.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\n\n";


	for (auto it = test3.begin(); it != test3.end(); ++it) {
		cout << *it << " ";
	}
	cout << "\n\n";



	set<int>EstimatedSet1 = { -3,-2, 1,2,3,4,5,6,15 };
	if (test1 == EstimatedSet1) {

		cout << "--------------------------\n\nThe 1 test is valid.\n\n--------------------------" << endl;
	}
	else {
		cout << "--------------------------\n\nThe 1 test isnt valid." << endl;

		cout << "Estimated output set : ";
		for (auto it = EstimatedSet1.begin(); it != EstimatedSet1.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\nYour output : ";
		for (auto it = test1.begin(); it != test1.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\n--------------------------";
	}
	set<int>EstimatedSet2 = { -2,1, 2,3,4,5,6,15 };
	if (test2 == EstimatedSet2) {
		cout << "--------------------------\n\nThe 2 test is valid.\n\n--------------------------" << endl;
	}
	else {
		cout << "--------------------------\n\nThe 2 test isnt valid." << endl;
		cout << "Estimated output set : ";
		for (auto it = EstimatedSet2.begin(); it != EstimatedSet2.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\nYour output : ";
		for (auto it = test2.begin(); it != test2.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\n--------------------------";
	}


	// tu specjalnie popelnilem blad  aby pokazac ze testy dzialaja
	// jesli z EstimatedSet3 zabrac liczbe 44 , wszstko bedzie dzialac

	set<int>EstimatedSet3 = { -3,-2,1, 2,3,4,5,6,44 };
	if (test3 == EstimatedSet3) {
		cout << "--------------------------\n\nThe 3 test is valid.\n\n--------------------------" << endl;
	}
	//
	else {
		cout << "--------------------------\n\nThe 3 test isnt valid." << endl;
		cout << "Estimated output set : ";
		for (auto it = EstimatedSet3.begin(); it != EstimatedSet3.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\nYour output : ";
		for (auto it = test3.begin(); it != test3.end(); ++it) {
			cout << *it << " ";
		}
		cout << "\n\n--------------------------";
	}
	///a
	cout << "heasjkldjas" << endl;




	return 0;
}