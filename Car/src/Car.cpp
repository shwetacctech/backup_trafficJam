// Car.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "Car.h"
//constructor
Car::Car(const std::vector<Point3D>& inVertices, const std::vector<float>& inColor):
mVertices(inVertices),
mColor(inColor)
{

}
//destructor
Car::~Car() {

}
//vertices getter
const std::vector<Point3D> Car::getVertices() const{
	return mVertices;
}
//colors getter
const std::vector<float> Car::getColors() const{
	return mColor;
}
//vertices setter
void Car::setVertices(const std::vector<Point3D>& newVertices) {
	mVertices = newVertices;
}
//colors setter
void Car::setColor(const std::vector<float>& newColor) {
	mColor = newColor;
}