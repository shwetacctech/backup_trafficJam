#pragma once
#include "pch.h"
#include <vector>
#include <Point3D.h>
// This class is exported from the dll
class TRANSFORMATIONS_API Transformations {
public:
	//Constructor
	Transformations();

	//Destructor
	~Transformations();
public:
	const std::vector<Point3D> translate_X_Left(std::vector<Point3D> inVertices); //translates points toward -x direction/left direction
	const std::vector<Point3D>  translate_X_Right(std::vector<Point3D> inVertices); //translates points toward +x direction/right direction
	const std::vector<Point3D>  translate_Y_UP(std::vector<Point3D> inVertices); //translates points toward +y direction/upwards direction
	const std::vector<Point3D>  translate_Y_Down(std::vector<Point3D> inVertices); //translates points toward -y direction/downwards direction

};

