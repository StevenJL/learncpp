#include <iostream>
 
void printA()
{
    std::cout << "A" << std::endl;
}
 
void printB()
{
    std::cout << "B" << std::endl;
}
 
// function printAB() calls both printA() and printB()
void printAB()
{
    printA();
    printB();
}
 
// Definition of main()
int main()
{
    using namespace std;
    cout << "Starting main()" << endl;
    printAB();
    cout << "Ending main()" << endl;
    return 0;
}

