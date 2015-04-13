#include <iostream>
 
int main()
{
    int x = 7;
    int y = 4;
 
    std::cout << "int / int = " << x / y << "\n";
    std::cout << "double / int = " << static_cast<double>(x) / y << "\n";
    std::cout << "int / double = " << x / static_cast<double>(y) << "\n";
    std::cout << "double / double = " << static_cast<double>(x) / static_cast<double>(y) << "\n";
 
    return 0;
}
// we convert an int into a float so we can do division
1
1.75
1.75
1.75


