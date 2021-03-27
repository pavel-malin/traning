// Array Passer
// Demonstrates the relationship between pointers and arrays

#include<iostream>

using std::cout;
using std::endl;

//functions
void increase(int* const array, const int NUM_ELEMENTS); 
void display(const int* const array, const int NUM_ELEMENTS); // displaying pointer

int main()
{
	cout << "Creating an array of high scores.\n\n";
	const int NUM_SCORES = 3;
	int highScores[NUM_SCORES] = { 5000, 3500, 2700 }; // array name highScores constant pointer
	cout << "Displaying scores using array name as a constant pointer.\n";
	cout << *highScores << endl;
	cout << *(highScores + 1) << endl; // equvalent to highScore[1]
	cout << *(highScores + 2) << "\n\n"; // equvalent to highScore[2]
	cout << "Increase scores by passing array as a constant pointer.\n\n";
	increase(highScores, NUM_SCORES); // Passes function increase() a constant pointer 
									  // to the first element of the array,
									  // as well as the number of elements in the array.
	cout << "Displaying scores by passing array as a constant pointer to a constant.\n";
	display(highScores, NUM_SCORES); // Also accepts highScores as a pointer
	return 0;
}
void increase(int* const array, const int NUM_ELEMENTS)
{
	for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
		array[i] += 500; // equvalent to *(array + i) += 500
	}
}
void display(const int* array, const int NUM_ELEMENTS)
{
	for (int i = 0; i < NUM_ELEMENTS; ++i)
	{
		cout << array[i] << endl;
	}
}