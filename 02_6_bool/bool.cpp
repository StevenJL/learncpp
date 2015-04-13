#include <iostream>
 
int main()
{
    using namespace std;
    bool b = true;
    cout << b << endl;
    cout << !b << endl;
 
    bool b2 = false;
    cout << b2 << endl;
    cout << !b2 << endl;
    return 0;
}

1
0
0
1


// even they are initialized as true and calse, booleans,
// when evaluated, they return 0 or 1, instead of true or false

// If you want to print true or false, use std::boolapha

#include <iostream>
#include <iomanip>
 
int main()
{
    using namespace std;
    cout << true << endl;
    cout << false << endl;
    cout << boolalpha; // print bools as true or false
    cout << true << endl;
    cout << false << endl;
    return 0;
}

1
0
true
false

