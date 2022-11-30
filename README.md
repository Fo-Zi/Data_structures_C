# Data Structures in C (In progress)
## Summary

This project will contain C implementations of data structures, with unit testing that was integrated using CMake and Google Tests, automated documentation using Doxygen, and code coverage capabilities. 

I choose to implement Unit Tests using GTests because it´s the one i found the easiest to integrate with an existing project that already uses CMake in its structure. I also tried Cppunit and pytest too but this approach was more straight forward. 

By now there is only a linked list implementation, i will update more soon.

## Build

There are a couple of useful commands to use make with. If you're using a Unix-based OS, you can build the project by running the following command in the root folder:
```
make configure
```
And then:
```
make buildit
```
This will create all the auxiliary and temprorary files in the build folder, maintaining the main one clean. 

To execute the tests only:
```
make test
```

If you want to create a dependency graph using Graphviz, you can do:
```
make dependencies
```
