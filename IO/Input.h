#ifndef INPUT_H
#define INPUT_H

#include "../Exceptions/Exception.h"//Dont like this, need a ROOT path or something

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

void read_input(std::string filename, std::vector<std::string>& param_list);

#endif
