#include <iostream>

int add(int x, int y)
{
  return x + y;
}

int main()
{
  int x = 1;
  int y = 2;

  int sum = add(x,y);

  int infinity = sum / 0; 

  return 0;
}

