// Functions Cannot be defined other functions (ie. No Nesting)
//
//
//  WRONG:
int main()
{
    int foo() // this function is nested inside main(), which is illegal.
    {
        std::cout << "foo!";
        return 0;
    }
 
    foo();
    return 0;
}

// RIGHT:
int foo() // no longer inside of main()
{
    std::cout << "foo!";
    return 0;
}
 
int main()
{
    foo();
    return 0;
}



