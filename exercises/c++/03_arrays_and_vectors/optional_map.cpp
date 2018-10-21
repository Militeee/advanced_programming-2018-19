#include<iostream>
#include<algorithm>
#include<map>

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
