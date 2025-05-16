#ifndef SELECTIONSORT_H_INCLUDED
#define SELECTIONSORT_H_INCLUDED
#include<algorithm>
using namespace std;
template<typename T>


    void selectionSort(T arr[],int sizeOfArray){
        for(int i=0;i<sizeOfArray-1;i++){
            int minEle=i;
            for(int j=i+1;j<sizeOfArray;j++){
                if(arr[j]<arr[minEle]){
                    minEle=j;
                }
            }
            swap(arr[i],arr[minEle]);
        }
    }


#endif // SELECTIONSORT_H_INCLUDED
