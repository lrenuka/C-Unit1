//
//  E02_Bitwise.cpp
//  Unit1_exercise2_understanding_bitwise
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E02_BitwiseSpec.cpp file.
 
 Your primary goal is to implement all these functions by using
 bitwise operators only.
 
 */

int andOfEachByte(int n) {
	int most1 = n >> 24;
	int result1 = n >> 16;
	int least1 = result1 & 0xFF;
	int result2 = n >> 8;
	int least2 = result2 & 0xFF;
	int least3 = n & 0xFF;
	int output = most1 & least1 & least2 & least3;
    return output;
}

//
// Note1:
// implement the function using bitwise operators only
// should not use * and + operators.
int numberFromBits(int bits[32]) {

    return -9999;
}

//
// Note2:
// implement the function using bitwise operators only
// should not use % and / operators.
void bitsFromNumber(int n, int bits[32]) {
	int i = 31;
	unsigned int m = n;
	   while(m > 0) {
		   
		   bits[i] = m & 1;
		   m = m >> 1;
		   i--;
	}
	   for (int j = i; j >= 0; j--) {
		   bits[j] = 0;
	   }
}

//
// Note3:
// Refer this to understand how numbers are represented in binary format
// https://www.youtube.com/watch?v=qrUjFtZZWf4
// mainly how negative number are represented.
//
// implement this function by calling above bitsFromNumber function only.
//
int numberOfOnesInBinary(int n) {
	int m;
	unsigned int z = n;
	int count = 0;
	while (z > 0) {
		
		m = z & 1;
		if (m == 1)
			count++;
		z = z >> 1;
		
	}
    return count;
}

//
// Returns
//  1 - yes
//  0 - no
//
int isPalindromeInBase256(unsigned long int n) {
    return -99;
}
