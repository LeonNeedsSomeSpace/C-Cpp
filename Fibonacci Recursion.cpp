#include <stdio.h>

//Recreate Fibonacci's sequence using a program

//define a function that accepts a as an integer
int Fibonacci(int a) {
	
	//If a is equal to 0, then 0 is returned. 
	//This makes sense as F0 in the Fibonacci Sequence is equal to 0
	if (a == 0) {
		return 0;
	}

	//If a is equal to zero, then 1 is returned
	//This makes sense as F1 in the Fibonacci Sequence is equal to 1
	if (a == 1) {
		return 1; 
	}

	//Set up the proceeding sequence. We recall that according to Fibonacci, Fa = Fa-1 + Fa-2
	return Fibonacci(a - 1) + Fibonacci(a - 2); 

}

//We will print out all the results from the Fibonacci sequence from F0 all the way to F25
int main() {
	int len = 25; //Define the length of our Fibonacci sequence

	for (int i = 0; i <= len; i++) {
		printf("Fibonacci(%d) = %d\n", i, Fibonacci(i));
	}
	return 0; 
}