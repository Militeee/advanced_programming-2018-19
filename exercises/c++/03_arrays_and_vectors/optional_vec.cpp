#include<iostream>
#include<algorithm>
#include<vector>
/* 
   This program reads a text form standard outputs and prints the words
   without repetitions and with the number of occurrncies, uses std:vector
   as a container.
   @author Salvatore Milite
   @version 21 October 2018
*/

/*
  A function that prints a word and its number of occurencies.
  @parama map an std::vec with words in it 
*/
void unique(std::vector<std::string>& vec)
{
	std::sort(vec.begin(), vec.end());
	std::cout << std::endl;
	unsigned int counter = 1;
	for(std::vector<std::string>::iterator it = vec.begin();
		it != vec.end(); ++ it)
	{
		if(*it != *(it + 1))
		{
			std::cout << *it << "   " << counter << std::endl;
			counter = 1;
		}
		else
			counter++;
	}	
	

}

int main(int argc, char* argv[])
{
	std::cout << "Insert words: " << std::endl;
	std::vector<std::string> vec;
	std::string word;
	while(std::cin >> word)
		vec.push_back(word);
	unique(vec);

}
