# Olio-ohjelmointi

This repository contains exercise projects for an object-oriented programming course. The examples focus on basic C++ programming, class-based design, and a simple Qt/QML application.

## Project structure

- H1: basic C++ functions and arithmetic operations with input validation
- H2/H2a: object-oriented C++ examples, including a simple car class
- H3/T2: console-based C++ exercise project
- H3/Teht2: Qt Quick/QML application entry point using QML module loading

## Tools used

- C++17 / CMake
- Qt 6 for the GUI/QML example

## Building the projects

Each exercise folder contains its own CMake project and build directory. To build a project, go to the folder and configure it with CMake:

```bash
cd H1
mkdir -p build
cd build
cmake ..
cmake --build .
```

For the Qt project in H3/Teht2:

```bash
cd H3/Teht2
mkdir -p build
cd build
cmake ..
cmake --build .
```

Then run the generated executable from the build directory.

## Notes

This repository is intended as a learning workspace for C++ and Qt basics, with each folder representing a different exercise or assignment during the course.
