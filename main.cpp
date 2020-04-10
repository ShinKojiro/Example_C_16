#include <iostream>

using namespace std;

//Constants
const int CAPACITY = 39;

//Function Declerations
void fillArray(int[], int&);
//fillArray
//@param int[] - scores of students
//@param int& - number of students

void printArray(const int[], int);
//printArray
//@param const int[] - scores of students
//@param int - number of students

int main()
{

	int scores[CAPACITY];
	int numOfElements = 0;
	fillArray(scores, numOfElements);
	printArray(scores, numOfElements);

	return 0;
}

//Function Definitions
//Arrays always pass by refrence, never by value
void fillArray(int newScores[], int& numOfElements)
{
	int i = 0;
	int score;
	cout << "Type in scores of students (-1 to stop): ";
	cin >> score;

	while ((score != -1) && (i < CAPACITY))
	{
		numOfElements++;
		newScores[i] = score;
		i++;
		cin >> score;
	}
}

void printArray(const int newScores[], int numOfElements)
{
	cout << "Scores: ";
	for (int i = 0; i < numOfElements; i++)
	{
		cout << newScores[i] << " ";
	}
}