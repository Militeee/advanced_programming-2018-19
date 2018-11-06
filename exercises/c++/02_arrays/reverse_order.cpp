/*
  A simple program that takes the dimension of an array
  and its elements and print out the content in reverse
  order
  @author Salvatore Milite
  @version 11 October 2018
 */
#include <iostream>

template <typename T>
T* allocate_a(const std::size_t array_size)
{
  new int[array_size];
}
template <typename T>
void print_array(const T* array, const std::size_t a)
{
  for(std::size_t i{a - 1}; i  != -1 ; i-- )
    std::cout << array[i] << std::endl;
}

int main()
{
    std::cout << "Insert array length" << std::endl;
    std::size_t size;
    std::cin >> size;
    int* array{allocate_a<int>(size)};
    std::cout << "Insert the elements of the array" << std::endl;
    for(std::size_t i{0}; i < size; i++)
		std::cin >> array[i];
    print_array(array, size);
    delete[] array;
}
