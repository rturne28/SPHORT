#include "Execution.h"

void execute(std::string filename)
{
  std::vector<std::string> input_params;
  read_input(filename, input_params);
  InputContainer container{ input_params };
  SpatialMesh mesh{ container._radius, container._cells };
  mesh.fillMesh();
  // double radvals[container]
  // double radvals = linspace(container._radius, container._cells);
  // Cell cell;
  // mesh.create_mesh
  // mesh will be a container of the cells with each cell
  //  having geometric info + boundary info. The mesh object will
  //  (I guess) be equipped with an iterator. Once this is established,
  //  an object to create the angles will be written with similar
  //  flags for boundaries and whatnot. Another object can be written
  //  one for space and one for angle that houses the output from
  //  one cell that will be the input for the next
}
