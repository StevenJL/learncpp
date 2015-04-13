// Note char also falls into the integer category
char c;
short int si; // valid
short s;      // preferred
int i;
long int li; // valid
long l;      // preferred
long long int lli; // valid
long long ll;      // preferred

// signed integer holds both negative and positive numbers
// Note the default int is signed: http://stackoverflow.com/questions/1555154/default-int-type-signed-or-unsigned
signed char c;
signed short s;
signed int i;
signed long l;
signed long long ll;
// A 1-byte signed integer has range -128 to 127

// unsigned if we know we wont be using negative numbers
unsigned char c;
unsigned short s;
unsigned int i;
unsigned long l;
unsigned long long ll;

// Overflow
// Let's say a variable holds only 4 bits (0-15)
// But we use it to store the value 21 
// 21 = 10101, but only 0101 will be saved (5)





