#include<iostream>
#include<algorithm>
#include<vector>
/*
  Program that stores all the word taken from std input
  and print them wihtout repetitions

  @author Salvatore Milite
  @version 21 October 2018

 */

/*
  Function that remove repeated objects on a string vector
  @param vec vector of strings
 */
void unique(std::vector<std::string>& vec)
{
	std::sort(vec.begin(), vec.end());
	std::cout << std::endl;
	for(std::vector<std::string>::iterator it = vec.begin()+1;
		it != vec.end(); ++ it)
	{
		if(*it != *(it+1))
			std::cout << s << std::endl;
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
