#include <iostream>
 
int main()
{
    char ch(97);
    std::cout << ch; // print the character
    int i(ch); // assign the value of ch to an integer
    std::cout << i; // print the integer value
    return 0;
}

// Better way is to typecast

int main()
{
    char ch(97);
    std::cout << ch << std::endl;
    std::cout << static_cast<int>(ch) << std::endl;
    std::cout << ch << std::endl;
    return 0;
}
a
97
a

// static_cast takes an expression as input and when its evaluated to produce a value
// It is then converted to the new type
// The original value is not effected by this
// ch is still a char



