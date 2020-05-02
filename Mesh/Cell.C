#include "Cell.h"

void Cell::setGeom()
{
  _Aw          = 4*pi*pow(_rw, 2.0);
  _Ae          = 4*pi*pow(_re, 2.0);
  _vol         = 4*pi/3*(pow(_re, 3.0)-pow(_rw, 3.0));
}
