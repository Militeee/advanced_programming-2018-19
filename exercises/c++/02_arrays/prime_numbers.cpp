#include <iostream>
#include "array_util.h"


int main()
{
  std::size_t size = 2;
  int* array{alloc_a<int>(size)};
  unsigned int counter{0};
  for(unsigned int i = 2; i < 100; i++)
    {
      bool flag{true};
      for(unsigned int j = 2; j < i && flag ; j++)
        if(i%j == 0)
	  flag = false;

      if(flag)
	array[counter++];

      if(counter >= size)
	{
	 array = resize<int>(array,size * 2, size);
	 size *= 2; 
	}
    }
  for(unsigned int i = 0; i < counter, i++)
    std::out << array[i];
}