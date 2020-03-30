#include "Mesh.h"

void Mesh::cell_solve(const double& r_w, const double& r_e) const
{
  const double result = r_w + r_e;
  std::cout << "result = " << result << std::endl;
}
