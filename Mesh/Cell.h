#ifndef CELL_H
#define CELL_H

#include <math.h>

class Cell
{
  // const double _rw;
  // const double _re;
  // const double  pi;
  // const double _Aw;
  // const double _Ae;
  // const double _vol;
  // bool         _origin_cell;
  // bool         _out_cell;
  double _rw;
  double _re;
  double  pi;
  double _Aw;
  double _Ae;
  double _vol;
  bool         _origin_cell;
  bool         _out_cell;

public:
  Cell() {} // default constructor needed for initializing mesh object

  Cell(double& r_west, double& r_east)
  : _rw{ r_west }, _re{ r_east }, pi{ 3.141592653589793 }, _Aw{ 4*pi*pow(_rw, 2.0) },
    _Ae{ 4*pi*pow(_re, 2.0) }, _vol{ 4*pi/3*(pow(_re, 3.0)-pow(_rw, 3.0)) },
    _origin_cell{ false }, _out_cell{ false }
  {
  }

  void setR_West(double r_west) { _rw = r_west; }
  void setR_East(double r_east) { _re = r_east; }
  double returnR_West_copy() { return _rw; }
  double returnR_East_copy() { return _re; }
};

#endif
