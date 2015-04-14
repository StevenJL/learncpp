// you can use sizeof on variables
int main()
{
    double d = 5.0;
    std::cout << sizeof(d); // will print the size of variable d in bytes
}

// comma operator
x,y // evaluates x then y, returns value of y

int z = (a, b); // evaluate (a, b) first to get result of b, assigns b to z
int z = a, b; // evaluates as "(z = a), b" so assigns a to z, then the comma operator resolves to b, which is discarded.

// note this comma usage is different from function call
int sum = add(x, y);

// conditional
// c ? x : y
// use this only if you will assign a value to a var based on a cond
// otherwise use if-else
large = (x > y) ? x : y;


