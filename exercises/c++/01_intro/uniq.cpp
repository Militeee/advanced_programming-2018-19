#include <iostream>

/*
  A simple progam that tries to simulate the behaviour of uniq -c
  It works on the std input stream and prints on the std output
  
  @author Salvatore Milite
  @version 04 October 2018

*/

int main()
{
	std::string line;
    std::string line2;
    std::getline(std::cin, line2);
    int counter = 1;
    while(std::getline(std::cin, line))
    {
		// actualy uniq prints the previous line and not the corrent one
        if(line != line2)
        {
            std::cout << counter << "\t" << line2 << std::endl;
            line2 = line;
            counter = 1;
        }
        else
            counter++;
	}
}
