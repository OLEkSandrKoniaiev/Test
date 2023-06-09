	#include <iostream>
	#include <fstream>

	int main() {
		std::ifstream fin;
		fin.exceptions(std::ifstream::badbit | std::ifstream::failbit);
		try
		{
			std::cout << "Trying open file" << std::endl;
			fin.open("exist_file.txt");
			std::cout << "File is successfully opened!" << std::endl;
		}
		catch (const std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
			std::cout << "File cannot be opened!" << std::endl;
		}
	}
