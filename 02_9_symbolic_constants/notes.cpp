// magic numbers are bad
int yen = dollars * 122;
// 122 is a magic number
// wtf is it? conversion rate?

// better but still bad
#define YEN_PER_DOLLAR 122
int yen = dollars * YEN_PER_DOLLAR

// better solution, use const
const int yenPerDollar(122);
int yen = dollars * yenPerDollar;
// const variables can't be changed

// unlike macro constants, const variables
// can be debugged

// You can also but constants in a header file 
// for DRY purposes



