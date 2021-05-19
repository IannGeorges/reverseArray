#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


void reverse (int array[],int size)
{
    int start = 0;  //starting position that is 0
    int end = size-1;   // initialize the variable at the last address of the array
    
    while(start<end)
    {
        int temp = array[start];  // entire code is to swap first and last value and increase value of start and decrease value of end and again do the same.
        array[start] = array[end]; 
        array[end] = temp;  
        
        start++;
        end--;
    }
    
    cout<<"After reversing the array elements :\n";
    for(int i=0;i<size;i++)
        cout<<array[i]<<" ";   //printing array elements in reverse order
}

int main() {
   int size; // size of an array
   cout << "Enter size of array \n";
   cin>>size; // taking input from user
    
   int array[size]; //defining array of user's size
   
   cout<<"Enter elements of array \n";
   for(int i=0;i<size;i++) // taking array input from user
      cin>>array[i];
    
   reverse (array,size);  //calling reverse function to reverse array elements 
}
