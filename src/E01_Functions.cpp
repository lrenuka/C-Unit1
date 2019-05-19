//
//  E01_Functions.cpp
//  Unit1_exercise1_understanding_functions
//

/*
 
 Note:
 Implement the functions in this exercise file to make the tests
 pass in E01_FunctionsSpec.cpp file.
 
 */


//
// Note:
//  Think of all the edge cases.
//
// returns the mid-point of
// given 2 points on X-axis
//
int midPoint(int x1, int x2) {
	int mid = 0;
	mid = x1 + (x2 - x1) / 2;
    return mid;
}

//
// sum of most significant digits of non-negative integers.
//
int sumOfMSDs(int num1, int num2) {
	int rem1 = 0;
	int rem2 = 0;
	int sum = 0;
	while (num1 != 0) {
		rem1 = num1 % 10;
		num1 = num1 / 10;
	}
	while (num2 != 0) {
		rem2 = num2 % 10;
		num2 = num2 / 10;
	}
    sum =  rem1 + rem2;
    return sum;
}

//
// sum of two 100 digit positive numbers
//
void sumOf100DigitNumbers(int num1[100], int num2[100], int sum[101]) {
	int sum1 = 0;
	int rem = 0;
	int n = 0;
	int  j = 100;
	
	for (int i = 99; i >= 0; i--)
	{
		sum1 = (num1[i] + num2[i]) + n;
		rem = sum1 % 10;
		n = sum1 / 10;
		
		sum[j] = rem;
		j--;
	}
	sum[j] = n;

}

//
// product of two 100 digit positive numbers
//
void productOf100DigitNumbers(int num1[100], int num2[100], int prod[200]) {
	unsigned long long result1, result2, result3;
	result1 = num1[0];
	result1 = num1[0];
	for (int i = 1; i < 100; i++) {
		result1 = (result1 * 10) + num1[i];
		result2 = (result2 * 10) + num2[i];
	}
	result3 = result1 * result2;
	for (int i = 199; i >= 0; i--) {
		int rem = result3 % 10;
		prod[i] = rem;
		result3 = result3 / 10;
	}
}
