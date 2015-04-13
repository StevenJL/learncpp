#ifndef CONSTANTS_H
#define CONSTANTS_H
 
// define your own namespace to hold constants
namespace Constants
{
    const double pi(3.14159);
    const double avogadro(6.0221413e23);
    const double my_gravity(9.2); // m/s^2 -- gravity is light on this planet
    // ... other related constants
}
#endif

// use the scope resolution
#include "constants.h"
double circumference = 2 * radius * Constants::pi;



