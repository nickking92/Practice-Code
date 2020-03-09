#include "Header.h"
#include <iostream>
namespace inputbers {
	void Test::printinputbers()
	{
		std::cout << "age: " << age << std::endl;
		std::cout << "godine: " << godine << std::endl;
		std::cout << "god: " << god << std::endl;
		std::cout << "People in Belgrade: " << people_InBelgrade << std::endl;
		std::cout << "People on the planet Earth: " << people_OnEarth << std::endl;
	
	}

	
	void Test::Casting()
	{
		
		int total = 0;
		int input1, input2, input3;
		const int count = 3;

		std::cin >> input1;
		std::cin >> input2;
		std::cin >> input3;

		total = input1 + input2 + input3;
		double average = 0.0;
		average = static_cast<double>(total) / count;
		std::cout << "Entered inputbers " << input1 << input2 << input3 << std::endl;
		std::cout << "Total amount is " << total << std::endl;
		std::cout << "Average amount is " << average << std::endl;

		int bigInt = 100;
		int smallInt = 8;
		double averageValue = 0.0;

		averageValue = static_cast<double>(bigInt) / smallInt;
		std::cout << averageValue << std::endl;
		/*   int total = 49;
		   int input = 8;
		   bool compare(total == input);
		   double d = 0.0;
		   d = static_cast<double>(total) / input;
		   std::cout << compare << std::endl;*/
	}
}
