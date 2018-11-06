#include<iostream>

template<typename T>
T* allocate_a(std::size_t size)
{
 T*  array{new T[size]};
}

template <typename T>
T* resize(T* array, std::size_t old_size, std::size_t new_size)
{
  T* array_new{new T[new_size]};
  for(std::size_t i = 0; i < old_size; i++ )
    array_new[i] = array[i];
  delete[] array;
  return array_new;
}

