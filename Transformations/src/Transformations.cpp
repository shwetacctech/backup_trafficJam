// Transformations.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Transformations.h"
//Constructor
Transformations::Transformations()
{
    
}
//Destructor
Transformations::~Transformations() {

}
//translates points toward -x direction/left direction
const std::vector<Point3D> Transformations::translate_X_Left(std::vector<Point3D> inVertices) {
    for (int i = 0; i < inVertices.size(); i++) {
        inVertices[i].setX(inVertices[i].X() - 5);
    }
    return inVertices;
}
//translates points toward +x direction/right direction
const std::vector<Point3D>  Transformations::translate_X_Right(std::vector<Point3D> inVertices) {
    for (int i = 0; i < inVertices.size(); i++) {
        inVertices[i].setX(inVertices[i].X() + 5);
    }
    return inVertices;

}
//translates points toward +y direction/upwards direction
const std::vector<Point3D>  Transformations::translate_Y_UP(std::vector<Point3D> inVertices) {
    for (int i = 0; i < inVertices.size(); i++) {
        inVertices[i].setY(inVertices[i].Y() + 5);
    }
    return inVertices;

}
//translates points toward -y direction/downwards direction
const std::vector<Point3D>  Transformations::translate_Y_Down(std::vector<Point3D> inVertices) {
    for (int i = 0; i < inVertices.size(); i++) {
        inVertices[i].setY(inVertices[i].Y() - 5);
    }
    return inVertices;

}