#ifndef INSERTIONSORT_H_INCLUDED
#define INSERTIONSORT_H_INCLUDED
template<typename t>


    void insertionSort(t arr[],int sizeOfArray){
        t key;
        int j;
        for(int i=1;i<sizeOfArray;i++){
            key=arr[i],j=i-1;
            while(j>=0 && arr[j]>key){
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=key;
        }
    }


#endif // INSERTIONSORT_H_INCLUDED
