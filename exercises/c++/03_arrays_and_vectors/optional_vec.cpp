#include<iostream>
#include<algorithm>
#include<vector>

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
