#include <iostream>
 
// add takes two integers as parameters, and returns the result of their sum
// add does not care what the exact values of x and y are
int add(int x, int y)
{
    return x + y;
}
 
int main()
{
    using namespace std;
    // It is the caller of add() that decides the exact values of x and y
    cout << add(4, 5) << endl; // 4 and 5 are passed to function add()
    return 0;
}

