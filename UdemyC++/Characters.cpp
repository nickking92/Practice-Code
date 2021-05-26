#include "Characters.h"

namespace StringsAndchars {

	void Characters::Print()
	{

		for (size_t i{ 0 }; i < strlen(fullName); i++)
		{
			if (isalpha(fullName[i]))
			{
				fullName[i] = toupper(fullName[i]);
			}
			std::cout << "My full name is " << fullName << std::endl;
		}

	}
	void Characters::stringExample()
	{
		std::cout << ime << std::endl;
		//std::cout << ime.substr(1,4) << std::endl;
		/*std::cout << ime.find("Nikola") << std::endl;*/
		std::cout << ime.erase(3, 6) << std::endl;
		std::cout << s << std::endl;
		std::cout << s2 << std::endl;
		//std::cout << s.clear() << std::endl;
	}
	void Characters::Found()
	{
		std::string name = "Nikola";
		std::string word;
		std::cin >> word;

		size_t postion = name.find(word);
		if (postion != std::string::npos)
		{
			std::cout << "Found" << word << " at position " << postion << std::endl;
		}
		else
		{
			std::cout << "Sorry word " << word << " not found" << std::endl;
		}
	}
	void Characters::SecretMessage()
	{
		std::cout << "Enter secret message:" << std::endl;
		std::getline(std::cin, secretMessage);

		std::string encryptedMessage{};
		std::cout << "encrypting message..." << std::endl;
		for (char c : secretMessage)
		{
			size_t position = alphabet.find(c);
			if (position != std::string::npos)
			{
				char newCharacter{ key.at(position) };
				encryptedMessage += newCharacter;
			}
			else
			{
				encryptedMessage += c;
			}

		}
		std::cout << "Encrypted message " << encryptedMessage << std::endl;

		std::string decryptedMessage{};
		std::cout << "Decrypting message..." << std::endl;

		for (char enc : encryptedMessage)
		{
			size_t position = key.find(enc);
			if (position != std::string::npos)
			{
				char newChar{ alphabet.at(position) };
				decryptedMessage += newChar;

			}
			else
			{
				decryptedMessage += enc;
			}
		}
		std::cout << "Encrypted message " << decryptedMessage << std::endl;
	}

	void Characters::Pyramid()
	{

		std::cout << "Enter a sequence of characters:";
		getline(std::cin, user_input);
		std::string emptySpace(user_input.length() - 1, ' ');
		for (size_t i = 0; i < user_input.length(); i++) { //print left side

			pyramid = user_input.substr(0, i + 1);

			std::cout << emptySpace;
			std::cout << pyramid;

			if (pyramid.length() == 1) {
				std::cout << emptySpace;
			}
			else
			{
				for (int j=pyramid.length(); j > 0; j--) { //print right side
					std::cout << pyramid.at(j - 1);
				}
			}
			emptySpace.erase(0, 1);
			std::cout << std::endl;
		}
	}
	void Characters::UdemyPyramid()
	{
		

		std::cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
		getline(std::cin, letters);

		size_t num_letters = letters.length();

		

		// for each letter in the string
		for (char c : letters) {

			size_t num_spaces = num_letters - position;
			while (num_spaces > 0) {
				std::cout << " ";
				--num_spaces;
			}

			// Display in order up to the current character
			for (size_t j = 0; j < position; j++) {
				std::cout << letters.at(j);
			}

			// Display the current 'center' character
			std::cout << c;

			// Display the remaining characters in reverse order
			for (int j = position - 1; j >= 0; --j) {
				// You can use this line to get rid of the size_t vs int warning if you want
				auto k = static_cast<size_t>(j);
				std::cout << letters.at(k);
			}

			std::cout << std::endl; // Don't forget the end line
			++position;
		}
	}
}