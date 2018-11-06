/*
  A vector implementation of the sieve od Eratosthenes
  it calculates the prime number up to a parameter N
  typed in by the user.

  @author Salvatore Milite
  @version 11 October 2018
 */

#include<iostream>
#include<vector>
#include<cmath>


int main()
{
	std::size_t N;
	std::cout << "Insert a number: ";
	std::cin >> N;
	std::cout << std::endl;
	std::vector<bool> vec{};
	for(std::size_t i = 0; i <= N; i++)
		vec.push_back(true);
	for(std::size_t i = 2; i <= std::sqrt(N); i++)
		if(vec[i])
			for(std::size_t j = i*i; j <= N; j += i)
				vec[j] = false;
	for( std::vector<bool>::iterator it = vec.begin() + 2;
		 it != vec.end(); ++it)
		if(*it)
			std::cout << it - vec.begin() << std::endl;
}

