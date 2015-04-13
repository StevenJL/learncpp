int x = 5;
int y = ++x; // x is now equal to 6, and 6 is assigned to y

int x = 5;
int y = x++; // x is now equal to 6, and 5 is assigned to y

int x = 5, y = 5;
cout << x << " " << y << endl;
cout << ++x << " " << --y << endl; // prefix
cout << x << " " << y << endl;
cout << x++ << " " << y-- << endl; // postfix
cout << x << " " << y << endl;

5 5
6 4
6 4
6 4
7 3

