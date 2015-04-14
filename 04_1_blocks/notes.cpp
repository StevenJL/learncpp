/* A block of statements, also called a compound statement, 
is a group of statements that is treated by the compiler 
as if it were a single statement. */

int add(int x, int y)
{ // start a block
    return x + y;
} // end a block
 
int main()
{ // start a block
 
    // multiple statements
    int value(0);
    add(3, 4);
 
    return 0;
} // end a block (no semicolon)

/* blocks can be nested inside other blocks */

int main()
{
    using namespace std;
    cout << "Enter an integer: ";
    int value;
    cin >> value;
    
    if (value > 0)
    { // start of nested block
        cout << value << " is a positive integer" << endl;
        cout << "Double this number is " << value * 2 << endl;
    } // end of nested block
    else
    { // start of another nested block
        cout << value << " is a negative integer" << endl;
        cout << "The positive of this number is " << -value << endl;
    } // end of another nested block
 
    return 0;
}

