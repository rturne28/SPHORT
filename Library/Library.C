#include "Library.h"

double linspace(const float& radius, const int& cells)
{
  double radii_vals[cells+1] = {};
  // radii_vals has length cells+1
  radii_vals[0] = 0.0;
  const double step = radius / cells;
  for (int i = 1; i < cells+1; ++i)
    radii_vals[i] = (i*step); //may need to preserve double here
  return radii_vals;
  // need to rewrite with an array or give the vector
  // correct length up front then just index to assign values
}
// call with double& radvals = linspace(radius, cells);
// I think linspace returns a copy of radii_vals (not ideal),
// but radvals will be a reference to this, so it wont be copied
// again in the assignment, right???


// SCRAPPING THIS FOR NOW: need to integrate the linspace Function
// to go ahead and assign _re and _rw to each cell when creating
// the cell objects. I know how to write the linspace function, I just
// dont want to deal with the copying of the array/ passing an
// empty array to linspace just to turn around and loop through
// it again.
