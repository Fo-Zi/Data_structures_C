# Data Structures in C (In progress)
## Summary

This project will contain C implementations of data structures, with unit testing that was integrated using CMake and Google Tests. 

I choose to implement Unit Tests using GTests because it´s the one i found the easiest to integrate with an existing project that already uses CMake in its structure. I also tried Cppunit and pytest too but this approach was more straight forward. 

By now there is only a linked list implementation, i will update more soon.

## Build

To build the code you would need to navigate to the 'build' folder, and run:
```
cmake ..
```
This will create all the auxiliary and temprorary files in the build folder, maintaining the main one clean. To update and execute:
```
make && ctest -VV
```
