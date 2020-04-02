#include "Exception.h"

void handle_exception(const char* exception)
{
  std::cerr << exception << std::endl;
  exit(EXIT_FAILURE);
}
