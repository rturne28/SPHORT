#ifndef CELL_H
#define CELL_H

#include <iostream>
#include <math.h>

class Cell
{
  const float _rw;
  const float _re;
  const double pi;
  const float _Aw;
  const float _Ae;
  const float _vol;
  bool        _origin_cell;
  bool        _out_cell;

public:
  Cell()
  : _rw{  }, _re{  }, pi{ 3.141592653589793 }, _Aw{ 4*pi*pow(_rw, 2.0) },
    _Ae{ 4*pi*pow(_re, 2.0) }, _vol{ 4*pi/3*(pow(_re, 3.0)-pow(_rw, 3.0)) },
    _origin_cell{ False }, _out_cell{ False }
  // void cell_solve(const double& r_w, const double& r_e) const;
};

#endif
