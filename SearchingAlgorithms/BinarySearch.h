#ifndef BINARYSEARCH_H_INCLUDED
#define BINARYSEARCH_H_INCLUDED

template<typename T>
void insertionSort(T arr[],int sizeOfArray)
{
    T key;
    int j;
    for(int i=1; i<sizeOfArray; i++)
    {
        key=arr[i],j=i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

template<typename T>
bool binarySearch(T arr[],int arrSize,T key)
{
    insertionSort(arr,arrSize);
    int first=0,_end=arrSize-1;
    while(first<=_end)
    {
        int mid=(first+_end)/2;
        if(arr[mid]==key)
        {
            return true;
        }
        else if(key>arr[mid])
        {
            first=mid+1;
        }
        else _end=mid-1;
    }
    return false;
}


#endif // BINARYSEARCH_H_INCLUDED
