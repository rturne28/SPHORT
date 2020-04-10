#include "Execution/Execution.h"
#include "Exceptions/Exception.h"
// put other header includes only in headers

#include <iostream>
// g++ main.C [all .C files] -o sphort.exe

int main(int argc, char const *argv[])
{
  try
  {
  if (argc < 2)
    throw "Error: No input file provided.";
  }
  catch (const char* exception)
  {
    handle_exception(exception);
  }
  
  execute(argv[1]);

  return EXIT_SUCCESS;
}
