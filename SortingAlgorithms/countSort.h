#ifndef COUNTSORT_H_INCLUDED
#define COUNTSORT_H_INCLUDED

#include <algorithm>
#include <iostream>
using namespace std;

void countSort(int arr[], int sizeOfArray) {
    int maxElement = *max_element(arr, arr + sizeOfArray);
    int minElement = *min_element(arr, arr + sizeOfArray);

    int range = maxElement - minElement + 1;


    int* arrCount = new int[range]();
    int* arrTemp = new int[sizeOfArray];


    for (int i = 0; i < sizeOfArray; i++) {
        arrCount[arr[i] - minElement]++;
    }


    for (int i = 1; i < range; i++) {
        arrCount[i] += arrCount[i - 1];
    }
    for (int i = sizeOfArray - 1; i >= 0; i--) {
        arrTemp[--arrCount[arr[i] - minElement]] = arr[i];
    }

    for (int i = 0; i < sizeOfArray; i++) {
        arr[i] = arrTemp[i];
    }


    delete[] arrCount;
    delete[] arrTemp;
}

#endif // COUNTSORT_H_INCLUDED
