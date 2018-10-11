/*
  A program which calculate the first 100 prime numbers in a
  naive way, storing them into an resizable array
  @author Salvatore Milite
  @versione 11 Octorber 2018

 */

#include <iostream>
#include "array_util.h"


int main()
{
  std::size_t size = 2;
  int* array{allocate_a<int>(size)};
  unsigned int counter{0};
  for(unsigned int i = 2; i < 100; i++)
    {
      bool flag{true};
	  unsigned int j;
      for(j = 2; j < i && flag ; j++)
        if(i%j == 0)
			flag = false;

      if(flag)
		  array[counter++] = j;

      if(counter == size)
	  {
		  array = resize<int>(array,size, size*2);
		  size *= 2; 
	  }
  }
  for(unsigned int i = 0; i < counter; i++)
	  std::cout << array[i] << std::endl;
  delete[] array;
}
