#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
double mean(std::vector<double> vec)
{
  register double mean;
  for(std::vector<double>::iterator it =  vec.begin(); it != vec.end(); ++it)
    mean += *it;
 mean /= vec.size();
  return mean;
}

double median(std::vector<double> vec)
{
  std::sort(vec.begin(), vec.end());
  unsigned int median_pos = ((vec.size() - 1)/2);
  double median =  (median_pos+1) % 2 == 0 ? (vec[median_pos] + vec[median_pos + 1]) / 2 : vec[median_pos]; 
  return median;
}

int main(int argc, char* argv[])
{
  std:: ifstream myfile;
  myfile.open("temperatures.txt");
  double val;
  std::vector<double> vec; 
  while(!myfile.eof())
    {
      myfile >> val;
      vec.push_back(val);
    }
  double median_p{median(vec)};
  double mean_p{mean(vec)};
  std::cout << "Median = "<< median_p << std::endl;
  std::cout << "Mean = " << mean_p << std::endl;
}
