// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the CAR_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// CAR_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#include <vector>
#include "pch.h"
#include <Point3D.h>
// This class is exported from the dll
class CAR_API Car {
public:
	Car(const std::vector<Point3D>& inVertices, const std::vector<float>& inColor); //constructor of car
	~Car(); //destructor of car
public:
	const std::vector<Point3D> getVertices() const ; //getter for getting car points
	const std::vector<float> getColors() const;  //getter for getting car color
	void setVertices(const std::vector<Point3D>& newVertice); //setter for vertices of cars
	void setColor(const std::vector<float>& newColor); // setter for car color
private:
	std::vector<Point3D> mVertices; //member variable vertices
	std::vector<float> mColor; //member variable color
};
