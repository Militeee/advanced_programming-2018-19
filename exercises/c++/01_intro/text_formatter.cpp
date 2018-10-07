#include <iostream>
#include <regex>

/*
    A simple text formatter that splits strings in half
    avoiding splitting words, the treshold is inputed 
	by the user

	@author Salvatore Milite
	@version 04 October 2018

*/

int main()
{
    std::string line;
    int tresh;
    std::cout << "Select a treshold \n";
    std::cin >> tresh;
    while(std::getline(std::cin, line))
    {
        if(line.length() > tresh)
        {
			int pos = line.length()/2;
			while(isalnum(line[pos]) || ispunct(line[pos]))
				pos++;
            std::cout << line.substr(0,(pos)
            << std::endl << line.substr((pos, line.length())
			<< std::endl;

        }
        else
            std::cout << line << std::endl;

    }
}

