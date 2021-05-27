#pragma once
#include <iostream>
#include "Header.h"
#include <vector>
class Function
{
public:
	int arrayNum[10]={1,2,3,4,5,6,7,8,9,10};
	double input=0;
	int num;
	int maxNum=1000;
	int minNum=1;
	double Pi=3.1415;
	double circle;
	std::vector<std::string> names={ "Nikola","Nina","Helena","Dusan" };

	void MathFunctions();
	void generateRandomNumber();
	size_t my_random(const size_t& min, const size_t& max);
	void circleArea(double& radius);
	void passingArray(int array[],const int& size,const int& value);
	void passByReference(int& num);
	void passByReferenceSwap(int& a, int& b);
	void staticExample();
	loooong recursion(loooong n);
	char toApperCase();
	std::vector<std::string> moreReference(std::vector<std::string> names);
	double fahrenheit_to_celsius(double temperature);
	double fahrenheit_to_kelvin(double temperature);
};

