#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // initialize variables
    int a, b, c, size, last;
    // initialize array size with the user's input
    int array[size];
    // makes the rand() function change integers everytime the program is ran 
    srand(time(NULL));
    // prompt the user for the array size
    cout << "Enter size of array \n";
    // retrieve user input
    cin >> size;
    // for loop to populate the array with random numbers
    for (a = 0;a<size;a++)
    {
        b = rand() % size+1;
        array[a]=b;
        cout << array[a];
    }
    // initialize the variable at the last address of the array
    last = size - 1;
    cout << "\n";
    // for loop to print the reverse of the array
    for (c = last; c >= 0; c--)
    {
        cout << array[c];
    }  
    return 0;
}
