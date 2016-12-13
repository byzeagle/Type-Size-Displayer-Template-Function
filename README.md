# TypeChecker

This program's purpose is to assist people in finding data sizes occupied by various data types. Since data sizes are architecture, compiler and operating system specific, one may need a short-hand, general purpose library to figure out system specific behaviour. 

# Usage

TYPE macro : Includes all the fundamental types in C++ langauge. It can be provided to display_sizes function as follows:

    display_sizes<TYPES>();

Functions intented for client use:

    display_sizes<>();
    null_check();

display_sizes function can be provided with arbitrary number of types:

    display_sizes<int, double, short int, float>();
