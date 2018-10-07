#include <iostream>
#include <string>

int get_int()
{
    int i;
    std::string mess = "Please type an integer";
    std::out << mess;
    while(!(std::cin >> i))
    {
        std::out << mess;
        std::cin.clear();
        std::cin.ignore();
    }
    return i;
}

double get_double()
{
    double i;
    std::string mess = "Please type an integer";
    std::out << mess;
    while(!(std::cin >> i))
    {
        std::out << mess;
        std::cin.clear();
        std::cin.ignore();
    }
    return i;
}


void uniq()
{
    std::string line;
    std::string line2;
    std::getline(std::cin, line2);
    int counter = 1;
    while(std::getline(std::cin, line))
    {
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


int main()
{
    std::cout << "Hello world! \n";

    /**
    int j = get_int();
    int k = get_double();
    std::cout << j;
    std::cout << k;
    **/
    uniq();

}
