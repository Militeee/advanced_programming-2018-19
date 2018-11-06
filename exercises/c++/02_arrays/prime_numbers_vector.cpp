/*
  A program which calculate the first 100 prime numbers in a
  naive way, storing them into a vector
  @author Salvatore Milite
  @versione 11 Octorber 2018

 */

#include <iostream>
#include <vector>


int main()
{
  std::vector<int> vec{};
  for(unsigned int i = 2; i < 100; i++)
    {
      bool flag{true};
	  unsigned int j;
      for(j = 2; j < i && flag ; j++)
        if(i%j == 0)
			flag = false;
      if(flag)
		  vec.push_back(j);
  }
  for(std::vector<int>::iterator it =  vec.begin();
	  it != vec.end(); ++it)
	  std::cout << *it  << std::endl;
}
