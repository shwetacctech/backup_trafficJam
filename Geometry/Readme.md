# Point3D Class

The `Point3D` class represents a point in a three-dimensional space with X, Y, and Z coordinates. This class provides methods to access and modify these coordinates.

## Features

- **Coordinate Access:** Allows access to X, Y, and Z coordinates of a point.
- **Getter and Setter Methods:** Provides methods to retrieve and modify the coordinates.
- **Support for 3D Space:** Designed for managing points in a three-dimensional space.

## Usage

To use the `Point3D` class within your project:

1. **Integration:** Include the necessary headers and link with the library or DLL containing the `Point3D` class.
2. **Instantiation:** Create instances of `Point3D` using default or parameterized constructors.
3. **Accessing and Modifying Coordinates:** Utilize getter and setter methods to retrieve and modify the coordinates of the point.

## Class Structure

- **`Point3D` Class:**
  - **Constructors:** Provides default and parameterized constructors to create a point in 3D space.
  - **Destructor:** Cleans up resources allocated for the `Point3D` object.
  - **Getter and Setter Methods:** Functions to access and modify X, Y, and Z coordinates.

## Example Usage

```cpp
// Example usage of the Point3D class

// Include necessary headers
#include "Point3D.h"

// Create a Point3D object
Point3D point1; // Creates a point at coordinates (0, 0, 0)
Point3D point2(1.0, 2.0, 3.0); // Creates a point at coordinates (1.0, 2.0, 3.0)

// Access and modify coordinates
double x = point2.X(); // Retrieves the X coordinate
point1.setY(5.0); // Sets the Y coordinate to 5.0
