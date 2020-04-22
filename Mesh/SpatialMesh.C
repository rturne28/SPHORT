#include "SpatialMesh.h"

void SpatialMesh::fillMesh()
{
  const double step = _radius / _cells;
  for (int i = 0; i < _cells; ++i)
  {
    double r_west = i*step;
    double r_east = (i+1)*step;
    Cell cell(r_west, r_east);
    // insert it into container of cell objects
  }
}
