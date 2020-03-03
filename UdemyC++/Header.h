#pragma once
#include <ostream>

namespace Numbers {

    static int min = 1;
    static int max = 100;
    static int myNum;

    class Test
    {
    public:
        int age = 21; // c-like initilaization
        int godine = (21); //Constructor initialization
        int god{ 21 }; // c++11 list initialization syntax
        long people_InBelgrade=2000000;
        unsigned long long people_OnEarth=7'600'000'000;
        void printNumbers();
        void Casting();
    };


}


/*   int a;
   std::cin >> a;
 if(a%2==0)
 {
     std::cout << a << "is even" << std::endl;
 }else
 {
     std::cout << a << "is not even" << std::endl;
 }*/
 //  int result;
 ////  int result = (a > b) ? a : b;
 //  result = (b != 0) ? (a / b) : 0;
 //std::cout<<result;

