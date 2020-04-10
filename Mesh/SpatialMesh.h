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
};

#endif
