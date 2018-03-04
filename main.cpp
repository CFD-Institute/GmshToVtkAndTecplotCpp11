#pragma once
#include <iostream>
#include "class_read_gmsh.h"
#include "class_cell_2D.h"

using namespace std;

int main()
{
    //GmshReader gmsh_reader;
    //gmsh_reader.read_mesh();
	//gmsh_reader.construct_id_nodes();
	list_cell_2D solver;
	solver.msh_reader.read_mesh();
	solver.msh_reader.construct_id_nodes();

    return 0;
}
