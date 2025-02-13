# Undefined Behavior in C++: Accessing Vector Data After Resizing

This repository demonstrates a common yet dangerous C++ bug: accessing a vector's elements using a raw pointer after the vector has been resized. This leads to undefined behavior, potentially resulting in crashes or unexpected outputs.

## The Bug
The `bug.cpp` file contains code that first populates a `std::vector` and obtains a raw pointer to its beginning. After resizing the vector, the code attempts to access elements via this raw pointer.  This is incorrect because resizing the vector invalidates any existing iterators or pointers to its elements.

## The Solution
The `bugSolution.cpp` file provides a corrected version of the code. Instead of using raw pointers, it demonstrates safe practices like using iterators, or accessing elements directly using vector indexing which is much safer.