#include <iostream>
#include "Header.h"
#include <climits>
#include "Loop.h"
#include "Characters.h"
#include "Function.h"
#include "Pointers.h"

int main()
{
    Pointers::Pointers p;
    size_t size;
    int init_value;
    int* allocation = nullptr;
    std::cout << "How many intiger for allocation?" << std::endl;
    std::cin >> size;
    std::cout << "What value would you like them initialized?" << std::endl;
    std::cin >> init_value;
    allocation=p.dynamicallyAllocated_CreateArray(size,init_value); //4 intigera dodeljeno heapu
    p.DisplayArray(allocation,size);
   delete[] allocation;
    /////////////////////////////////////
    
    //////////////////////////////////////////////////////////////////////////
// /*   const char* name ="Nikola Krstic aka Nickking";
//    std::cout <<name;*/
//   // double radius;
    Function f;
    f.moreReference(f.names);
//   // f.MathFunctions();
//    //f.generateRandomNumber();
//    //f.circleArea(radius);
//    //f.passingArray(f.arrayNum, 4,5);
//
//  /*  char input= f.toApperCase();
//        std::cout << input << std::endl;*/
//
//
//    //std::cout <<f.recursion(3) << std::endl;
//
//   // f.staticExample();
//
//    //{
//    //    /*f.maxNum=10000;
//    //    f.passByReference(f.maxNum);*/
//    //}
//    //{
//        //int x = 10; int y = 20;
//        //std::cout << "a= " << x << "b= " << y << std::endl;
//        //f.passByReferenceSwap(x, y);
//        //std::cout << "x= " << x << "y= " << y << std::endl;
//    /*}*/
//
//   // StringsAndchars::Characters c;
//    //c.SecretMessage();
//   // c.Pyramid();
//  /*  c.UdemyPyramid();*/
//    //c.stringExample();
//
//

//
//   // Loop:: Loop l;
//    //l.contBreak();
//    //to check l.devidedBy3or5();
//    //l.doubleValueOneLoop();
//    //l.doWhile();
//    //l.DualVektor();
//  /*  l.evennumbers();*/
//  //  l.MultidimensionalVector();
//   // l.NestedVector();
//   // l.pointerCharLoop();
//  //  l.someOddnumbers();
//   // l.Table();
////l.tenInRow();
//   // l.vektorChar();
//   // l.whileLoop();
//  //  inputbers::Test t;
//   /* t.Casting();
//    t.printNumbers();*/
    return 0;
}
