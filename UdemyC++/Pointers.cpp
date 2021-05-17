#include "Pointers.h"
namespace Pointers {

	int* Pointers::dynamicallyAllocated_CreateArray(size_t size, int int_value = 0)
	{
		int* new_storage = nullptr;
		new_storage = new int[size];
		for (size_t i = 0; i < size; ++i)
		{
			*(new_storage + i) = int_value; //sve inicijalizovano na 0
			return new_storage;
		}
	}
	void Pointers::DisplayArray( int* const array, size_t size)
	{
		for (size_t i = 0; i < size; i++)
		{
			std::cout << array[i] << std::endl;
		}
	}
}