#include "Input.h"

void read_input(std::string filename, std::vector<std::string>& param_list)
{
  std::ifstream infile{filename};
  try
  {
    if (!infile)
      throw "Error: Give me a file that exists big dawg";
  }
  catch (const char* exception)
  {
    handle_exception(exception);
  }

  while (infile)
    {
        std::string linestr;
        std::getline(infile, linestr);
        if (linestr.front() == '/' || linestr.length() == 0) continue;
        //https://stackoverflow.com/questions/28163723/c-how-to-get-substring-after-a-character/28163823
        std::string name = linestr.substr(0,linestr.find(' '));
        std::string var = linestr.substr(linestr.find(':')+1);
        std::cout << name << " = " << var << '\n';
        param_list.push_back(var);
    }
}
