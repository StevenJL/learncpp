#include <iostream>
 
// getValueFromUser will read a value in from the user, and return it to the caller
int getValueFromUser()
{
    using namespace std;
    cout << "Enter an integer: ";
    int a;
    cin >> a;
    return a;
}
 
int main()
{
    using namespace std;
    int x = getValueFromUser(); // first call to getValueFromUser
    int y = getValueFromUser(); // second call to getValueFromUser
 
    cout << x << " + " << y << " = " << x + y << endl;
 
    return 0;
}

