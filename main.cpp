//Juwon Hong
//CIS 25
//7/10/2024


// main.cpp
#include <iostream>
#include "sort.h"
using namespace std;

int main() {
    int arr[] = {30, 16, 8, 11, 24};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Unsorted array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "Sorted array: ";
    printArray(arr, n);

    return 0;
}
