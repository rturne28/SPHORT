#ifndef INPUT_CONTAINER_H
#define INPUT_CONTAINER_H

#include <vector>
#include <string>

struct InputContainer
{
  const float       _radius;
  const int         _cells;
  const int         _angles;
  const int         _anisotropy;
  const std::string _BC;
  const bool        _DSA;

  InputContainer(std::vector<std::string>& param_list)
  : _radius{ std::stof(param_list[0].c_str()) },
    _cells{ ::atoi(param_list[1].c_str()) },
    _angles{ ::atoi(param_list[2].c_str()) },
    _anisotropy{ ::atoi(param_list[3].c_str()) },
    _BC{ param_list[4] },
    _DSA{ param_list[5].compare("True") == 0 }
  {
  }
};

#endif
