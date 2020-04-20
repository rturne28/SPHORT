#include "Library.h"

void linspace(std::vector<double>& radii_vals, const float& radius,
              const int& cells) // careful, rad_vals not const
{
  radii_vals has length cells+1
  first value is manually 0
  last value is manually radius
  const double step = radius / cells;
  radii_vals.push_back(0.0);
  for (int i = 1; i < cells; ++i)
    radii_vals.push_back(i*step); //may need to preserve double here
  radii_vals.push_back(radius);
  // need to rewrite with an array or give the vector
  // correct length up front then just index to assign values
}
