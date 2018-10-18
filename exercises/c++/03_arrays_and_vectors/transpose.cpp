#include<iostream>
#include<array>

#define COL 10
#define ROW 10


template<std::size_t N>
void slow_transpose(std::array<double,N>& M, std::size_t r, std::size_t c)
{
  std::array<double,(COL * ROW)> M2{};
  for(std::size_t i = 0; i < r; ++i )
    for(std::size_t j = 0; j < c; ++j )
      M2[i*c + j] = M[j * c + i];
  std::swap(M2,M);
}
template<std::size_t N>
void print_m(const std::array<double,N> M, std::size_t r, std::size_t c)
{
  for(std::size_t i = 0; i < r; ++i )
  {
    for(std::size_t j = 0; j < c; ++j )
      std::cout << M[i* c + j] << " ";
    std::cout << std::endl;
  }
}

int main(int argc, char* argv[])
{
  std::size_t col = COL;
  std::size_t row = ROW;
  std::array<double,(COL * ROW)> mat{};
  for(std::size_t i = 0; i < row * col; ++i)
    mat[i] = i;
  slow_transpose(mat, row, col);
  print_m(mat, col, row);
}
