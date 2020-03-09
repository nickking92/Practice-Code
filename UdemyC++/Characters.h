#pragma once
#include <string>
#include <cstring>
#include <iostream>
namespace StringsAndchars {
	class Characters
	{
	public:

		//my pyramid
		std::string user_input;
		std::string pyramid;

		//udemy pyramid
		std::string letters;
		int position=0;


		char fullName[50]{};
		std::string ime ="Nikola";
		std::string s = { "Nikola",2 };
		std::string s2 = { s,0,1 };
		//std::string x3(3,'X');
		
		std::string secretMessage;
		std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
		std::string key{"MNOPQABCDEFGRSTUVWXYZHIJKLuvwxyzghijklmnopqrstabcdef"};


		void Print();
		void stringExample();
		void SecretMessage();
		void Pyramid();
		void UdemyPyramid();
	};


}