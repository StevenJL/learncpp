#include <iostream>
#include "add.h" // it copies the contents of add.h into the current file at that point
 
int main()
{
    using namespace std;
    cout << "The sum of 3 and 4 is " << add(3, 4) << endl;
    return 0;
}



