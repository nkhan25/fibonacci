#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;


int fibRecursive(int x) 				//Returns value at index x of fibonacci sequence
{
    if (x < 2)
	{
		return x;			//base case(s)
    }     

    return (fibRecursive (x - 1) + fibRecursive (x - 2));		//recursive call to fibRecursive
}

int fibIterative(int x)
{
	if (x <=1)
	{
		return x;
	}
	int fib = 1;
	int fibPrev = 1;
	for (int i = 2; i < x; i++)
	{
		int temp = fib;
		fib += fibPrev;
		fibPrev = temp;
	}
	return fib;
}

int main()
{ 
	int num;
	cout << "Please enter a positive integer: ";		//prompt user input
    cin >> num;
	if (num < 0)
	{
		cout << "Invalid input.";
	}
	cout << "Recursive sequence: \n";
	
	//TIME RECURSIVE SEQUENCE
	clock_t beginA = clock();
	for (int x = 0; x <= num; x++)				//print all fib values from 0 to fib[num]
	{
		cout << fibRecursive(x) << " ";
	}
	clock_t endA = clock();
	double elapsed_secsA = double(endA - beginA) / CLOCKS_PER_SEC;
	
	
	cout << "\n\n";
	
	cout << "Iterative sequence: \n";
	
	//TIME ITERATIVE SEQUENCE
	clock_t beginB = clock();
	for (int x = 0; x <= num; x++)				//print all fib values from 0 to fib[num]
	{
		cout << fibIterative(x) << " ";
	}
		clock_t endB = clock();
	double elapsed_secsB = double(endB - beginB) / CLOCKS_PER_SEC;
	
	cout << "\n\n";
	
	
	//Display Times
	cout << "\nTime for Recursive: " << elapsed_secsA;				//Big O: 2^n
	cout << "\nTime for Iterative: " << elapsed_secsB;			//Big O: n

}