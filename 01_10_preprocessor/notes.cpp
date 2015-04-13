/* preprocessor is a separate program that runs
before the compiler when you compile your program.
It's purpose is to process directives.

The preprocessor does not understand C++
It just manipulates text before the compiler runs */

#include <filename>
// Look for this file in a special place defined
// by the OS where header files for C++ runtime
// library are held

#include "filename"
/* Looks for the file in the directory containing
the source file. If it doesn't find it, it will
check any other include paths that you've specified.
*/ 

// MACROS
#define // creates macros
// there are Function-like macros
// and Object-like macros

// Object-like macros
#define identifier
#define identifier substitution_text


// conditional macros
#define PRINT_JOE

#ifdef PRINT_JOE
cout << "Joe" << endl;
#endif

#ifdef PRINT_BOB
cout << "Bob" << endl;
#endif

#ifndef DONT_PRINT_BOB
cout << "Bob" << endl;
#endif

// HEADER GUARDS
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE
// your declarations here
#endif



