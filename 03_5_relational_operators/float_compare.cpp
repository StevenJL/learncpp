#include <iostream>
 
int main()
{
    double d1(100 - 99.99); // should equal 0.01
    double d2(10 - 9.99); // should equal 0.01
 
    if (d1 == d2)
        std::cout << "d1 == d2" << "\n";
    else if (d1 > d2)
        std::cout << "d1 > d2" << "\n";
    else if (d1 < d2)
        std::cout << "d1 < d2" << "\n";
    
    return 0;
}
// The above will return unexpected results
// It will return d1 < d2

// here are two better solutions
#include <cmath> // for fabs()
bool isAlmostEqual(double a, double b, double epsilon)
{
    // if the distance between a and b is less than epsilon, then a and b are "close enough"
    return fabs(a - b) <= epsilon;
}

// return true if the difference between a and b is within epsilon percent of the larger of a and b
bool approximatelyEqual(double a, double b, double epsilon)
{
    return fabs(a - b) <= ( (fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * epsilon);
}


