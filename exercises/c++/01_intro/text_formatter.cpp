#include <iostream>
#include <string>
/*
    A simple text formatter that splits strings in half
    avoiding splitting words, the treshold is inputed 
	by the user

	usage:
	text_formatter.x treshold (<< test.txt)

	@author Salvatore Milite
	@version 04 October 2018

*/

int main(int argc, char *argv[])
{
    std::string line;
    int tresh{std::stoi(argv[1])};
    while(std::getline(std::cin, line))
    {
        if(line.length() > tresh)
        {
			// avoid splitting words
			size_t pos{line.length()/2};
			while(isalnum(line[pos]) || ispunct(line[pos]))
				pos++;
			// left justify
			size_t pos2{pos};
			while(isspace(line[pos2]))
				pos2++;
			
            std::cout << line.substr(0,pos)
            << std::endl << line.substr(pos2, line.length())
			<< std::endl;

        }
        else
            std::cout << line << std::endl;

    }
}

