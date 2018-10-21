#include<iostream>
#include<algorithm>
#include<unordered_map>

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
