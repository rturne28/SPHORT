#include "Mesh/Mesh.h"

int main(int argc, char const *argv[])
{
  const double a = 3.3;
  const double b = 5.5;
  Mesh mesh;
  mesh.cell_solve(a,b);
  return 0;
}
