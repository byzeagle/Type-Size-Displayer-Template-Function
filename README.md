# TypeChecker

This program's purpose is to assist people in finding data sizes occupied by various data types. Since data sizes are architecture, compiler and operating system specific, one may need a short-hand, general purpose library to figure out system specific behaviour. 

# Usage

TYPES macro includes all the fundamental types in C++ langauge. It can be provided to display_sizes function as follows:

    display_sizes<TYPES>();

Functions intented for client use:

    display_sizes<>();
    null_check();

display_sizes function can be provided with arbitrary number of types:

    display_sizes<int, double, short int, float>();

# Example Output

     --- Arbitrary Type Example --- 
    int                     : 4 bytes | 32 bits
    short int               : 2 bytes | 16 bits
    double                  : 8 bytes | 64 bits

     --- TYPES MACRO Example --- 
    bool                    : 1 bytes | 8 bits
    char                    : 1 bytes | 8 bits
    signed char             : 1 bytes | 8 bits
    unsigned char           : 1 bytes | 8 bits
    wchar_t                 : 2 bytes | 16 bits
    char16_t                : 2 bytes | 16 bits
    char32_t                : 4 bytes | 32 bits
    short int               : 2 bytes | 16 bits
    unsigned short int      : 2 bytes | 16 bits
    int                     : 4 bytes | 32 bits
    unsigned int            : 4 bytes | 32 bits
    long int                : 4 bytes | 32 bits
    unsigned long int       : 4 bytes | 32 bits
    long long int           : 8 bytes | 64 bits
    unsigned long long int  : 8 bytes | 64 bits
    float                   : 4 bytes | 32 bits
    double                  : 8 bytes | 64 bits
    long double             : 8 bytes | 64 bits

     --- null_check function example --- 
    NULL macro is of integral type.
