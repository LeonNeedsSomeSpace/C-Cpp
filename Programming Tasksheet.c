#include <stdio.h>

//As for this exercise, it gives us an array with six numbers, and we are asked to do various tasks with them, including sorting them in a specific order, finding median and the even numbers.



int main() { //Function 'int main();'... MUST BE INCLUDED IN EVERY C/C++ FILE (ensures that even number 0 is returned at the end)!

	//Task 4.1: Define an array of numbers and print them

	int intArray[6] = { 16, 7, 15, 47, -3, 0 }; //Define the Array with the variable called 'intArray' with six digits and assign their values

	int i; //Define the index 'i' in order to use it in a loop

	  
	printf("Elements of the array: ");
	for (int i = 0; i < 5; i++) { //Now, print the intiger values from i=1 to i=6 out,

		printf("%d, ", intArray[i]); //Make sure to add ', ' after '%d' so the values get printed out nicely in order with comma.
	}
	printf("%d", intArray[5]);


	//Task 4.2: Find the maximum, minimum, median, sum, as well as the average of the intiger values

	int max = intArray[0]; //Define the intiger 'max' for the maximum value of 'intArray', and use it to find the maximum later
	int min = intArray[0]; //Define the intiger 'min' for the minimum value of 'intArray', and use it to find the minimum later


	for(int i = 0; i < 6; i++) //The outer loop iterates over this array and represents each pass through through the array

		if(intArray[i] > max) { //If-condition created. If the condition is met, the command will be executed
			
			max = intArray[i]; //Command that is to be executed. The element that has the largest value in 'intArray' will be the value of 'max'
		}
	for(int i = 0; i < 6; i++) //The outer loop iterates over this array and represents each pass through through the array
	
		if (intArray[i] < min) { //If-condition created. If the condition is met, the command will be executed

		min = intArray[i]; //Command that is to be executed. The element that has the smallest value in 'intArray' will be the value of 'min'

		}

	int sum = 0; //Define the intiger 'sum' for the sum of the value of 'intArray', and use it to find the minimum later

	for (int i = 0; i < 6; i++) { //For creating the sum of all elements of the array in 'intArray', create a loop that adds all the elements of that array and store the result into the intiger 'sum'
		
		sum += intArray[i];

	}
	int j; 
	for (int i = 0; i < 5; i++) { //For sorting the elements from the smallest to the largest value, use bubble sort
		for (int j = i + 1; j < 6; ++j) { //Create a loop for the bubble sort that initializes a new index 'j' to 1 + (the current index 'i'), and it will increment it and run till the end of the array
			if (intArray[i] > intArray[j]) { // If-condition created. If the element in the array ahead of the index i be smaller than index j, the following command(s) will be executed
				int temp = intArray[i]; // The element of intArray[i] will be stored in the new intiger 'temp'. The following lines show this is only temporary
				intArray[i] = intArray[j]; //The space where the element of 'intArray[i]' once occupied is now taken by the element of 'intArray[j]'
				intArray[j] = temp; // The element stored in 'temp' now takes up the space that 'intArray[j]' once occupied
			}
		}
	}
	printf("\nSorted elenebts of the array: "); 
	for (int i = 0; i < 5; i++) {
		printf("%d, ", intArray[i]); 
	}
	printf("%d\n", intArray[5]); 



	int median = (intArray[2] + intArray[3]) / 2; //Since 'intArray' has 6 elements, the median cannot be a single number but the second and third number added, then divided by 2

	double mean = (sum / 6.0); // Create a function that takes 'double' as a parameter and calculates mean (average) using the sum. The function divides the value of sum with 6. Make sure to write 6.0 
							   //instead of 6 only in order for the result to be a floating-point number (rational number that can support variable number of digits before and after the decimal point)

	printf("The maximum number of the array is: %d\n", max); // Print the maximum value of the array using 'printf' 
	printf("The minimum of the array is: %d\n", min); // Print the minimum value of the array using 'printf'
	printf("The median of the array is: %d\n", median); //Print the median value of the array using 'printf'
	printf("The sum of the array is: %d\n", sum); //Print the sum of the array using 'printf'
	printf("The average of the array is: %lf\n", mean); // Print the average value of the array using 'printf'


	//Task 4.3: Print all even numbers
	//Apparently you have to redefine the array with a different intiger in order to get it printe out, at tleast that's what you have to do if you want to have this in the same file

	int Array[6] = { 16,7,15,47,-3,0 }; //For the sake of my sanity, because I have no idea what is going on, just rewrite the Array with a different int

	printf("Even numbers in the array: ");
	for (int i = 0; i < 6; i++) { //Intitialize the loop

		if (Array[i] % 2 == 0) //If a number is even, which means that the quotient equals zero when divided with two, it will be printed

			printf("%d, ", Array[i]); //Print the value when value is even
	}





	return 0; 

}
