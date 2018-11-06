#include<iostream>
#include<array>
// set the number of cols and rows
#define COL 20
#define ROW 5
/*
  The programs transpose and print a matrix of number form 1 to N
  of sizes declared in macros.
  @author Salvatore Milite
  @version 21 October 2018
*/


/*
  This function takes a matrix, coded by an std::array and a value from rows
  and columns, and calculate its transpose, modifing the original array. 
  @param1 M the std::arry of size r*c
  @param2 r the row number
  @param3 c the column number
*/
template<std::size_t N>
void slow_transpose(std::array<double,N>& M, std::size_t r, std::size_t c)
{
  std::array<double,(COL * ROW)> M2;
  for(std::size_t i = 0; i < r; i++ )
    for(std::size_t j = 0; j < c; j++ )
      M2[j*r + i] = M[i * c + j];
  std::swap(M2,M);
}

/*
  This functions take a matrix, coded by a std::array a row number and a
  column number, and print it.
  @param1 M the std::arry of size r*c
  @param2 r the row number
  @param3 c the column number
*/
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
