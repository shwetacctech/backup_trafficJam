# TrafficJam Application

The TrafficJam application is a simple interactive simulation of cars rendered in a 3D environment using OpenGL within a Qt framework. It allows users to view and manipulate cars within a static scene.

## Features

- **Rendering Cars:** The application renders cars in a 3D environment using OpenGL.
- **Manipulating Cars:** Users can move cars in four directions (up, down, left, right) using provided buttons.
- **Selecting Cars:** Users can select specific cars from a dropdown menu to manipulate.
- **Static Scene Rendering:** Displays a static scene of cars initially upon application launch.
- **Reads OBJ Files:** Capable of reading OBJ files for loading car models.

## Dependencies

The application relies on the following technologies and libraries:

- **Qt Framework:** Utilizes the Qt framework for the graphical user interface.
- **OpenGL:** Uses OpenGL for rendering the 3D graphics.
- **C++:** Developed using C++ programming language.

## Usage

To use the TrafficJam application:

1. **Building:** Compile the application's source code using Qt Creator or any compatible C++ compiler.
2. **Launching:** Run the compiled executable to launch the application.
3. **Interface:** The UI provides buttons for moving cars in different directions, selecting specific cars, rendering a static scene, and stopping car movements.

## File Structure

- **TrafficJam.cpp/h:** Contains the main functionality and logic of the application.
- **OpenGLWindow.cpp/h:** Manages the rendering of the OpenGL scene.
- **Point3D.cpp/h:** Defines the structure for 3D points used in the application.
- **Car.cpp/h:** Represents the structure and properties of a car object.
- **Other UI-related files:** Handles the UI elements using the Qt framework.

## Building and Running

To build and run the application:

1. **Prerequisites:** Ensure Qt and necessary dependencies are installed.
2. **Compilation:** Compile the source files using Qt Creator or C++ compiler.
3. **Execution:** Run the compiled executable to start the TrafficJam application.

