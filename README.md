cplusplus
=========
##project 1: 
compile and run simple cpp code with g++

###command: 
* g++ -o testobj test.cpp
* ./testobj


##project 2:
This project includes a very good makefile! It can be used in any projects, without modifying the makefile itself.
In this project, we use the makefile to compile the c++ project and run.

###command:
* make
* make clean
* ./main

*"return" will not print anything on the screen.

##project 3:
Go through each topic in the list below:
loops, conditions, classes, inheritance, data structures (linked lists, etc)

* "\n" will start a new line.
* Variable must be initialized before use.
* "endl" will make sure the cout ends with "\n".
* "break" only leaves a loop, even if the condition for its end is not fulfilled. It can be used to end an infinite loop, or to force it to end before its natural end
* When calling for a void function which is defined in a class, we should keep the parenthesis. e.g. r.area() 
* static member need to be inialized outside the class. For example:
int dummy::n = 0;
* array definition is: type * arrayname = new type[n];
To delete array is to do: delete[] arrayname;
* Inherit constructor inside the inherited class: 
subclass(int a, int b):superclass(int a, int b){}

##project 4:
Coding practice:
1. 

##project 5:
Random practice:
1. Find prime number from the given range.
