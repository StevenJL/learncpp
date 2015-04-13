#include <iostream>
 
int main()
{
    using namespace std; // this way we dont have to prefix cout with std::

    cout << "Enter a number: "; // ask user for a number
    int x = 0;
    cin >> x; // read number from console and store it in x
    cout << "You entered " << x << std::endl;
    return 0;
}

