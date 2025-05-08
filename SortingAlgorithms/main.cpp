#include <iostream>
#include "insertionSort.h"
#include"mergeSort.h"
#include"QuickSort.h"
#define line "-------------------------------------------------------------------------------------------------------------------------------\n"
using namespace std;

//test cases
    //n=8 //6 3 8 5 2 7 4 1
    // n=7 //10 80 30 90 40 70 50
    // n=25 //17 3 25 8 12 1 30 19 7 21 6 15 11 24 4 14 29 2 13 20 9 22 16 5 10
// n=100
    /*42 7 93 18 65 11 29 87 34 56
21 99 3 70 16 80 14 26 68 49
90 5 77 13 58 27 40 1 33 85
63 10 95 31 46 24 60 37 20 98
12 36 2 81 73 6 100 9 17 45
22 84 25 94 32 55 19 71 8 66
30 50 59 43 28 91 23 64 38 76
4 44 48 75 15 35 39 52 41 67
47 53 61 72 62 83 74 69 92 88
97 78 86 89 54 57 51 79 82 96
*/




template<typename t>
//display
void display(t arr[],int sizeOfArray){
    cout<<"Array are :";
    for(int i=0;i<sizeOfArray;i++){
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
template<typename t>
void equalTwoArray(t temp[],t arr[],int n){
for(int i=0;i<n;i++){
        arr[i]=temp[i];
    }

}



int main()
{

    int n;
    cout<<"Enter number of element: ";
    cin>>n;
    int *arr=new int[n];
    cout<<"Enter "<<n<< " elements: ";
    for(int i=0;i<n;i++)cin>>arr[i];
    int *tempArr=new int[n];
    equalTwoArray(arr,tempArr,n);
    cout<<line;
    //before sort
    cout<<"before sort , ";
    display(arr,n);

    // use insertion sort
    cout<<"Insertion sort \n";
    insertionSort(arr,n);
    display(arr,n);
    equalTwoArray(tempArr,arr,n);

   cout<<line;
     //before sort
     cout<<"before sort , ";
    display(arr,n);

     // use merge sort
    cout<<"merge sort \n";
    mergeSort(arr,n);
    display(arr,n);

    equalTwoArray(tempArr,arr,n);
    cout<<line;

     //before sort
     cout<<"before sort , ";
    display(arr,n);

     // use Quick sort
    cout<<"Quick sort \n";
    QuickSort(arr,n);
    display(arr,n);

    equalTwoArray(tempArr,arr,n);



    delete []tempArr;
    delete []arr;
    return 0;
}
