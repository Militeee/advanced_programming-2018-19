#include <iostream>
#include <string>


/*
   @author Salvatore Milite
   @Version 04 October 2018

   Both functions take a valid integer or double from the stream

   @param in input stream 
   @return the integer/double retrieved from the stream

 */

int get_int(std::istream& in)
{
    int i;
    in << mess;
    while(!(in >> i))
    {
        in.clear();
        in.ignore();
    }
    return i;
}

double get_double(std::istream& in)
{
    double i;
    while(!(in >> i))
    {
        in.clear();
        in.ignore();
    }
    return i;
}

/*
    Test of the methods on the std::cin

*/

int main()
{

    std::cout << "Insert a valid integer"
    int j = get_int(std::cin);
    std::cout << "Insert a valid double"
    double k = get_double(std::cin);
    std::cout << "You typed(int): " << j;
    std::cout << "You typed(double): " << k;
  
}
