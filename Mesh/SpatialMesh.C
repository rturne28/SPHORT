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

void SpatialMesh::detailMesh()
{
  const double step = _radius / _cells;
  int counter = 0;
  std::vector<Cell>::iterator cell;
  for (cell = _mesh.begin(); cell != _mesh.end(); ++cell, ++counter)
  {
    cell->setR_West(counter*step);
    cell->setR_East((counter+1)*step);
    cell->setGeom();
    // std::cout << "cell " << counter << " _vol = "
    // << cell->returnVol_copy() << "\n";
  }
  _mesh.front().setOrigin_Cell(true);
  _mesh.back().setOut_Cell(true);
  // std::cout << "cell " << counter << " _out_cell = "
  // << _mesh.back().returnOut_copy() << "\n";

}
