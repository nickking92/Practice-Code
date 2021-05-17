#pragma once
#include <iostream>
namespace Pointers {
	class Pointers
	{
	public:
		int* dynamicallyAllocated_CreateArray(size_t size, int);
		void DisplayArray(int* const array, size_t size);
	};
}
