/* Local variables have block scope
They are created when block is entered
They are destroyed when block is exited

In nested blocks, variables in outer block can
be accessed inside a nested block. */


int main()
{ // start outer block
    using namespace std;
 
    int x(5);
 
    { // start nested block
        int y(7);
        // we can see both x and y from here
        cout << x << " + " << y << " = " << x + y;
    } // y destroyed here
 
    // y can not be used here because it was already destroyed!
 
    return 0;
} // x is destroyed here

// Shadowing
// When inner variable overrides outer variable
int main()
{ // outer block
    int apples(5);
 
    if (apples >= 5)
    { // nested block
        int apples(10); // hides previous variable named apples
 
        // apples now refers to the nested block apples
        // the outer block apples is hidden
 
        std::cout << apples;
    } // nested block apples destroyed
 
    // apples now refers to the outer block apples
    std::cout << apples;
 
    return 0;
} // outer block apples destroyed

// RULE: define variables in the smallest scope possible

// Function Parameters
// function parameters have block scope


