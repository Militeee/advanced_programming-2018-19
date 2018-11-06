#include<iostream>
#include<algorithm>
#include<map>
/* 
   This program reads a text form standard outputs and prints the words
   without repetitions and with the number of occurrncies, uses std:map
   as a container.
   @author Salvatore Milite
   @version 21 October 2018
*/

/*
  A function that prints a word and its number of occurencies.
  @param map an std::map with wordds as the keys and occurrencies as the values 
*/
void unique(std::map<std::string, unsigned int>& map)
{
	std::cout << std::endl;
	for(std::map<std::string, unsigned int>::iterator it = map.begin();
		it != map.end(); ++ it)
		std::cout << it->first << "  " << it->second  << std::endl;
}

int main(int argc, char* argv[])
{
	std::cout << "Insert words: " << std::endl;
	std::map<std::string, unsigned int> map;
	std::string word;
	while(std::cin >> word)
		++map[word];
	unique(map);

}
