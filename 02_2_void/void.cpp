#include <iostream>

// void can be used for a function that does not return a value
void writeValue(int x) // void here means no return value
{
  std::cout << "The value of x is: " << x << std::endl;
  // no return statement, because the return type is void
}


// void can be used for a function that does not take any arguments
int getValue(void) // void here means no parameters
{
  int x;
  std::cin >> x;
  return x;
}

// you can also do this too for a function to not take any arguments
int getValue() // void here means no parameters
{
  int x;
  std::cin >> x;
  return x;
}


int main()
{
  int value;
  value = getValue();
  writeValue(value);
  return 0;
}

