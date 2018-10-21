#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
/*
  This progam open a file called "tempratures.txt" and calculates mean
  and median of the value stored in it.
  @author Salvatore Milite
  @version 21 October 2018
*/

/*
  This function simply calculate the mena with the standard formuala 
  \f$ \mu = \frac{1}{n} \cdot \sum\limits_{i = 0}^{n - 1} x_i \f$
  @param vec double numerical vector
  @return the mean
*/
double mean(std::vector<double> vec)
{
  register double mean;
  for(std::vector<double>::iterator it =  vec.begin(); it != vec.end(); ++it)
    mean += *it;
 mean /= vec.size();
  return mean;
}
/*
  A function that calculates the median of a vector of double values
  @param vec a numericl vector
  @return the median value
*/
double median(std::vector<double> vec)
{
  std::sort(vec.begin(), vec.end());
  unsigned int median_pos = ((vec.size() - 1)/2);
  // account for even sizes
  double median =  (median_pos) % 2 == 0 ? (vec[median_pos] + vec[median_pos + 1]) / 2 : vec[median_pos]; 
  return median;
}

int main(int argc, char* argv[])
{
  std:: ifstream myfile;
  myfile.open("temperatures.txt");
  double val;
  std::vector<double> vec; 
  while(myfile >> val)
      vec.push_back(val);
  double median_p{median(vec)};
  double mean_p{mean(vec)};
  std::cout << "Median = "<< median_p << std::endl;
  std::cout << "Mean = " << mean_p << std::endl;
}
