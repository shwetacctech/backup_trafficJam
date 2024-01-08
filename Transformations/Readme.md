# Transformations Class

The `Transformations` class encapsulates methods for translating a vector of `Point3D` objects in different directions within a three-dimensional space. This class is intended for applying translation operations (moving points) in various directions.

## Features

- **Translation Methods:** Provides methods for translating points in four cardinal directions (-x, +x, -y, +y).
- **Support for Point Translations:** Takes a vector of `Point3D` objects and returns the translated vector.
- **DLL Exported Class:** Designed to be used as an exported class from the DLL.

## Usage

To use the `Transformations` class within your project:

1. **Integration:** Include the DLL and necessary headers within your project.
2. **Instantiation:** Create an instance of the `Transformations` class.
3. **Applying Translations:** Call the respective methods to translate a vector of `Point3D` objects in the desired direction.

## Class Structure

- **`Transformations` Class:**
  - **Methods:**
    - `translate_X_Left`: Translates points towards -x direction (left).
    - `translate_X_Right`: Translates points towards +x direction (right).
    - `translate_Y_UP`: Translates points towards +y direction (upwards).
    - `translate_Y_Down`: Translates points towards -y direction (downwards).

## Example Usage

```cpp
// Example usage of the Transformations class

// Include necessary headers
#include "Transformations.h"

// Create an instance of Transformations
Transformations transformer;

// Create a vector of Point3D objects
std::vector<Point3D> points = { /* Define points */ };

// Translate points in different directions
std::vector<Point3D> translatedLeft = transformer.translate_X_Left(points);
std::vector<Point3D> translatedUp = transformer.translate_Y_UP(points);
