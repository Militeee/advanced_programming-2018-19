#include <iostream>
#include <string>

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
            std::cout << line.substr(0,(line.length()/2))
            << std::endl << line.substr((line.length()/2), line.length()) << std::endl;

        }
        else
            std::cout << line << std::endl;

    }
}
