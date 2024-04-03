#pragma once
#include<set>
#include<iostream>
class IntersectionTester
{
public:
	IntersectionTester();

	
	bool validate(const std::set<int>& OutputSet,const std::set<int>& EstimatedSet);

private:


	static int TestCounter;
	
};

