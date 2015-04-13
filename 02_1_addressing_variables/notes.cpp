/*
The smallest addressable unit of memory is not a bit,
but a byte.

Address 0 | 10010011
Address 1 | 10101011
Address 2 | 11110011
Address 3 | 10010011

C++ Data Types
boolean        | bool
character      | char, wchar_t, char16_t, char32_t
floating point | float, double, long double
integer        | short, int, long, long long
void           | void
*/

// Defining variables
int n;
n = 5;

int n = 5;

// multiple
int n, m, p;
int n = 1, m = 2, p = 3;

// Where to define variables
// Define variables as close to their use

// Implicit vs Explicit instantiation
int value = 5; explicit
int value(5); implicit
// They differ if a class has a constructor marked 'explicit'. Then, one of these does not work.
// Otherwise, no difference.

