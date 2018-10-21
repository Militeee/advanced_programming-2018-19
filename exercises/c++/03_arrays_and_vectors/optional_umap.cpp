#include<iostream>
#include<algorithm>
#include<unordered_map>
/* 
   This program reads a text form standard outputs and prints the words
   without repetitions and with the number of occurrncies, uses std:unordered_map
   as a container.
   @author Salvatore Milite
   @version 21 October 2018
*/

/*
  A function that prints a word and its number of occurencies.
  @parama map an std::unordered_map with wordds as the keys and occurrencies as the values 
*/
void unique(std::unordered_map<std::string, unsigned int>& map)
{
	std::cout << std::endl;
	for(std::unordered_map<std::string, unsigned int>::iterator it = map.begin();
		it != map.end(); ++ it)
		std::cout << it->first << "  " << it->second  << std::endl;
}

int main(int argc, char* argv[])
{
	std::cout << "Insert words: " << std::endl;
	std::unordered_map<std::string, unsigned int> map;
	std::string word;
	while(std::cin >> word)
		++map[word];
	unique(map);

}
