#ifndef CELL_H
#define CELL_H

#include <math.h>

class Cell
{
  double _rw;
  double _re;
  double  pi{ 3.141592653589793 };
  double _Aw;
  double _Ae;
  double _vol;
  bool   _origin_cell{ false };
  bool   _out_cell{ false };

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
  void setOrigin_Cell(bool origin) { _origin_cell = origin; }
  void setOut_Cell(bool out) { _out_cell = out; }
  void setGeom();

  double returnR_West_copy() { return _rw; }
  double returnR_East_copy() { return _re; }
  double returnVol_copy() { return _vol; }
  double returnOut_copy() { return _out_cell; }
};

#endif
