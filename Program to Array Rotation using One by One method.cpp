#include <bits/stdc++.h>
using namespace std;

// function to left Rotate arr[] of size n by 1

void leftRotatebyOne(int arr[], int n)
{
	int temp = arr[0], i;
	for (i = 0; i<n -1; i++)
		arr[i] = arr[i+1];
	arr[i] = temp;
}

// function to left Rotate arr[] of size n by d

void leftRotate(int arr[], int n, int d)
{
	for (int i = 0; i<d; i++)
	leftRotatebyOne(arr, n);
}

// utility function to print array

void printArray(int arr[], int n)
{
	for (int i = 0; i<n; i++)
		cout<< arr[i] << " ";
}

// driver function

int main()
{
  int arr[] = { 1, 2, 3, 4, 5, 6, 7 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
  
    // Function calling 
    leftRotate(arr, 2, n); 
    printArray(arr, n); 
  
  return 0;
}

