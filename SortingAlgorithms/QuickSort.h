#ifndef QUICKSORT_H_INCLUDED
#define QUICKSORT_H_INCLUDED
#include<algorithm>
template<typename t>
int partitionArr(t arr[],int low,int height){

    t pivot=arr[height];
    int indexOfPartitionSwap=low-1;
    for(int i=low;i<height;i++){
        if(arr[i]<pivot){
            std::swap(arr[i],arr[++indexOfPartitionSwap]);
        }
    }
    std::swap(arr[height],arr[++indexOfPartitionSwap]);
    return indexOfPartitionSwap;
}
template<typename t>
void QuickSort(t arr[],int low,int height){

    if(low<height){
        int indexOfPivot=partitionArr(arr,low,height);
        QuickSort(arr,low,indexOfPivot-1);
        QuickSort(arr,indexOfPivot+1,height);
    }

}
template<typename t>
void QuickSort(t arr[],int n){

    QuickSort(arr,0,n-1);

}

#endif // QUICKSORT_H_INCLUDED
