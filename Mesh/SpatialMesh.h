#ifndef SPATIAL_MESH_H
#define SPATIAL_MESH_H

#include "Cell.h"

#include <vector>

class SpatialMesh
{
  const double      _radius;
  const int         _cells;
  std::vector<Cell*> _mesh; // not sure about the poiner here yet

public:
  SpatialMesh(const double& radius, const int& cells)
  : _radius{ radius }, _cells{ cells }, _mesh(cells)
  {
  }

  // void printer();

  // void sizeMesh(std::vector<Cell>& mesh);

  void fillMesh();
};

// Function that takes radius and # of cells data and creates a cell object
// for each cell, calculates geometric info and applies flags, and places each
// cell object in a container in this class. May also need to create an iterator
// for this container, but it is possible that this can be done somewhere else

#endif
