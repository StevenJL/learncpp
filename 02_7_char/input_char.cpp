#include <iostream>
 
int main()
{
    using namespace std;
 
    cout << "Input a keyboard character: ";
 
    char ch;
    cin >> ch;
    cout << ch << " has ASCII code " << static_cast<int>(ch)<< endl;
 
    return 0;
}


