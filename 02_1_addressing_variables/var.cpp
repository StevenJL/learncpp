#include <iostream>

int main()
{
    using namespace std;
 
    cout << "Enter a number: ";
    int x; // we need x on the next line, so we'll declare it here, as close to it's first use as possible.
    cin >> x; // first use of x
 
    cout << "Enter another number: ";
    int y; // we don't need y until now, so it gets declared here
    cin >> y; // first use of y
 
    cout << "The sum is: " << x + y << endl;
    return 0;
}

