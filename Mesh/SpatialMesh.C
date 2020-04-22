#include "SpatialMesh.h"

#include <iostream>

// void SpatialMesh::printer()
// {
//   for (int i = 1; i < 5000; ++i)
//   {
//     std::cout << "i = "  << i << "\n";
//     std::cout << "rw = " << _mesh[i]._rw << "\n";
//   }
// }

// void SpatialMesh::sizeMesh(std::vector<Cell>& mesh)
// {
//   mesh.resize(_cells);
//   //might need default constructor for cell
// }

void SpatialMesh::fillMesh()
{
  const double step = _radius / _cells;
  for (int i = 0; i < _cells; ++i)
  {
    double r_west = i*step;
    double r_east = (i+1)*step;
    // Cell cell(r_west, r_east);
    // insert it into container of cell objects
  }
}
