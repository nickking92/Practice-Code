#include "Function.h"
#include <time.h>

void Function::MathFunctions()
{
    std::cin >> input;
    std::cout <<"The square root of "<<input<<" is "<< sqrt(input) << std::endl;
    std::cout <<"The cubed root of "<<input<<" is "<< cbrt(input) << std::endl;
    std::cout <<"The sine of "<<input<< " is " << sin(input) << std::endl;
    std::cout <<"The cosine of "<<input<< " is " << cos(input) << std::endl;
    std::cout <<"The ceil  of "<<input<< " is " << ceil(input) << std::endl;
    std::cout <<"The floor of "<<input<< " is " << floor(input) << std::endl;
    std::cout <<"The round of "<<input<< " is " << round(input) << std::endl;
    std::cout << "The absolute value of " << input << " is " << abs(input) << std::endl;

}

void Function::generateRandomNumber()
{
    srand(time(NULL)); 
    
    for(size_t i=0;i<=maxNum;++i)
    {
        num = my_random(minNum, maxNum);
        std::cout << "Random number is" << num << std::endl;
    }
}

size_t Function::my_random(const size_t& min, const size_t& max)
{  
    size_t random = rand() % max + min;
    return size_t(random);
}

void Function::circleArea(double& radius)
{
    const double P=3.1415;
    std::cin >> radius;
    circle = P * radius * radius;
    std::cout << "Area:" << circle << std::endl;
    
}

void Function::passingArray( int array[], const int& size, const int& value)
{
    for(int i =0; i <size;i++)
    {
        array[i] = value;
        std::cout << array[i]<<std::endl;
    }
}

void Function::passByReference(int& num)
{
    if(num >100)
    {
        num = 100;
    }
    std::cout << maxNum << std::endl;
}

void Function::passByReferenceSwap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Function::staticExample()
{

    static int value = 5000;
    std::cout << value << std::endl;
    value += 1000;
    std::cout << value << std::endl;
}

loooong Function::recursion(loooong n)
{
        if (n == 0)
            return 1;
            return n * recursion(n - 1);
          
    }

char Function::toApperCase()
{
    char input;
    std::cin >> input;
    return toupper(input);
}

std::vector<std::string> Function::moreReference(std::vector<std::string> names)
{
for(auto& const name :names)
{
    name = "Nikola";
}
for (auto name : names)
{
    std::cout << name << std::endl;
}
return names;
}
