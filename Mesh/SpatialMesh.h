#ifndef SPATIAL_MESH_H
#define SPATIAL_MESH_H

class SpatialMesh
{
  const double _radius;
  const int    _cells;

public:
  SpatialMesh(const double& radius, const int& cells)
  : _radius{ radius },
    _cells{ cells }
  {
  }

  void fillCellList();
};

// Function that takes radius and # of cells data and creates a cell object
// for each cell, calculates geometric info and applies flags, and places each
// cell object in a container in this class. May also need to create an iterator
// for this container, but it is possible that this can be done somewhere else

#endif
