#include<iostream>
#include<array>

#define COL 20
#define ROW 5


template<std::size_t N>
void slow_transpose(std::array<double,N>& M, std::size_t r, std::size_t c)
{
  std::array<double,(COL * ROW)> M2;
  for(std::size_t i = 0; i < r; i++ )
    for(std::size_t j = 0; j < c; j++ )
      M2[j*r + i] = M[i * c + j];
  std::swap(M2,M);
}

template<std::size_t N>
void print_m(const std::array<double,N> M, std::size_t r, std::size_t c)
{
  for(std::size_t i = 0; i < r; i++ )
  {
    for(std::size_t j = 0; j < c; j++ )
		std::cout << M[i* c + j] << ((M[i*c + j] < 10) ? "  " :" ");
    std::cout << std::endl;
  }
}

int main(int argc, char* argv[])
{
  std::size_t col = COL;
  std::size_t row = ROW;
  std::array<double,(COL * ROW)> mat{};
  for(std::size_t i = 0; i < row * col; i++)
    mat[i] = i;
  print_m(mat,row,col);
  slow_transpose(mat, row, col);
  print_m(mat, col, row);
}
