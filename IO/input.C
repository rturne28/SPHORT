#include "input.h"

void read_input(std::string filename)
{
  std::ifstream inf{filename};
  try
  {
    if (!inf)
      throw "Input file could not be opened for reading";
    // std::cerr << "Input file " << filename << " could not be opened for reading."
    //           << std::endl;
  }
  catch (const char* exception)
  {
    std::cerr << exception << std::endl;
  }
}

// need some way of terminating the program without a return
// if the user input file doesnt exist
