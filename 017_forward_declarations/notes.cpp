/*Function prototype is declaration statement that tells the compiler
what a function's return type is, the name of the function,
and the types of function parameters.*/

// A function prototype can be use to forward declare.

int doMath(int first, int second, int third, int fourth); // better solution
int doMath(int, int, int, int);
// The above are both valid function prototypes for this function
int doMath(int first, int second, int third, int fourth)
{
  return first + second * third / fourth;
}



