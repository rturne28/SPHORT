#include "input.h"
#include "../Exceptions/Exception.h"//Dont like this, need a ROOT path or something

void read_input(std::string filename)
{
  std::ifstream inf{filename};
  try
  {
    if (!inf)
      throw "Input file could not be opened for reading";
  }
  catch (const char* exception)
  {
    handle_exception(exception);
  }
}
