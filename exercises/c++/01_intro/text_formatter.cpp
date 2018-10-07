#include <iostream>
#include<string>

int main()
{
    double measure;
    std::string unit;
    int result;
    std::cin >> measure >> unit;
    if(unit == "inch")
        std::cout << measure * 0.0254 << " m";
    else if (unit == "m" || unit == "meters")
        std::cout << measure * (1/0.0254) << " inch";
    else
        std::cout << unit << " is not a valid unit";

    //1 inch = 0.0254 m
}

