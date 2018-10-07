#include <iostream>
#include <regex>
/*
    A simple converter from inch to meters and vice-versa
	@author Salvatore Milite
	@version 04 October 2018
*/
int main()
{
    double measure;
    std::string unit;
    int result;
    std::cin >> measure >> unit;
    if(std::regex_match(unit,std::regex("inch(es)?")))
        std::cout << measure * 0.0254 << " m" << std::endl;
	else if (std::regex_match(unit,std::regex("m|met(re|er){1}s?")))
        std::cout << measure * (1/0.0254) << " inch" << std::endl;
    else
        std::cout << unit << " is not a valid unit" << std::endl;

    //1 inch = 0.0254 m
}

