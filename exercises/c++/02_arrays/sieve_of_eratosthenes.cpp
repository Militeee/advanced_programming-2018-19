/*
  An array implementation of the sieve od Eratosthenes
  it calculates the prime number up to a parameter N
  typed in by the user.

  @author Salvatore Milite
  @version 11 October 2018
 */
#include<iostream>
#include"array_util.h"
#include<cmath>


int main()
{
	std::size_t N;
	std::cout << "Insert a number: ";
	std::cin >> N;
	std::cout << std::endl;
	// account for the N included
	bool* array{allocate_a<bool>(N + 1)};
	for(std::size_t i = 0; i <= N; i++)
		array[i] = true;
	for(std::size_t i = 2; i <= std::sqrt(N); i++)
		if(array[i])
			for(std::size_t j = i*i; j <= N; j += i)
				array[j] = false;
	for(std::size_t i = 2; i <= N; i++)
		if(array[i])
			std::cout << i << std::endl;
	delete [] array;
}
