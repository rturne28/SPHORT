#include "Mesh/Mesh.h"
#include "IO/input.h"

#include <iostream>
// g++ main.C [all .C files] -o sphort.exe

int main(int argc, char const *argv[])
{
  try
  {
  if (argc < 2)
    throw "Error: No input file provided.";
  }
  catch (const char* exception)
  {
    std::cerr << exception << std::endl;
    return 1;
  }
  read_input(argv[1]);
  const double a = 3.3;
  const double b = 5.5;
  Mesh mesh;
  mesh.cell_solve(a,b);
  return 0;
}
