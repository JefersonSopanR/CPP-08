# CPP-08

This repository contains solutions for the C++ Module 08 exercises, focusing on advanced STL usage, custom containers, and algorithm implementation. Each exercise is organized in its own folder:

## Contents

- **ex00**: Implementation of a generic `easyfind` function to search for an integer in various STL containers.
- **ex01**: Implementation of the `Span` class, which efficiently stores a range of integers and computes the shortest and longest span between them.
- **ex02**: Implementation of the `MutantStack` class, a stack supporting iterator access, demonstrating custom container adaptation.

## How to Build & Run

Each exercise folder contains its own `Makefile`:

```bash
cd ex00 && make
./ex00

cd ../ex01 && make
./ex01

cd ../ex02 && make
./ex02
```

## File Structure

- `ex00/easyfind.hpp`, `ex00/main.cpp`, `ex00/Makefile`
- `ex01/Span.hpp`, `ex01/Span.cpp`, `ex01/main.cpp`, `ex01/Makefile`
- `ex02/MutantStack.hpp`, `ex02/main.cpp`, `ex02/Makefile`

## Requirements

- C++98 or later
- Standard Template Library (STL)

## Author

Jeferson Sopan R

---
Feel free to explore each exercise for more details and usage examples.
