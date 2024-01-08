# Car DLL

The Car DLL provides a class `Car` designed to manage the properties and functionalities of a car object within a 3D environment. This class is intended for use in projects requiring car manipulation and rendering.

## Features

- **Car Object Handling:** Manages the properties of a car object, including vertices and colors.
- **Getter and Setter Functions:** Provides functions to access and modify car vertices and colors.
- **DLL Exported Class:** Designed to be used as an exported class from the DLL.

## Usage

To use the Car class within your project:

1. **Integration:** Include the DLL and necessary headers within your project.
2. **Object Initialization:** Instantiate the `Car` class by providing vertices and colors.
3. **Accessing Properties:** Utilize getter and setter functions to access and modify car properties.

## Class Structure

- **`Car` Class:** Represents a car object within the 3D environment.
  - **Constructor:** Initializes the car object with provided vertices and colors.
  - **Destructor:** Cleans up memory and resources allocated for the car object.
  - **Getters and Setters:** Functions to access and modify car vertices and colors.

## Example Usage

```cpp
// Example usage of the Car class

// Include necessary headers
#include "Car.h"

// Create car object with vertices and colors
std::vector<Point3D> vertices = { /* Define vertices */ };
std::vector<float> colors = { /* Define colors */ };
Car myCar(vertices, colors);

// Access and modify car properties
std::vector<Point3D> newVertices = { /* New vertices */ };
myCar.setVertices(newVertices);

// Retrieve car colors
std::vector<float> retrievedColors = myCar.getColors();
