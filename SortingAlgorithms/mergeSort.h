#ifndef MERGESORT_H_INCLUDED
#define MERGESORT_H_INCLUDED


template<typename t>


void merge(t arr[],int left,int mid,int right){
    int i,j,k;//i index of first subarray //j index of second subarray //k index of big array

    int sizeOfLeftsubArr=mid-left+1;
    int sizeOfRightsubArr=right-mid;
    t *leftsubArr=new t[sizeOfLeftsubArr];
    t *rightSubArr=new t[sizeOfRightsubArr];

    for(i=0;i<sizeOfLeftsubArr;i++){
        leftsubArr[i]=arr[i+left];
    }
    for(j=0;j<sizeOfRightsubArr;j++){
        rightSubArr[j]=arr[j+mid+1];
    }
    i=j=0;
    k=left;

    while(i<sizeOfLeftsubArr && j<sizeOfRightsubArr){
        if(leftsubArr[i]<=rightSubArr[j]){
            arr[k]=leftsubArr[i];
            i++;
        }else{
            arr[k]=rightSubArr[j];
            j++;
        }
        k++;
    }
    while(i<sizeOfLeftsubArr){
         arr[k]=leftsubArr[i];
            i++;k++;
    }
     while(j<sizeOfRightsubArr){
         arr[k]=rightSubArr[j];
            j++;k++;
    }
}
template<typename t>
void mergeSort(t arr[],int left,int right){
    if(left<right){
        int mid=left+(right-left)/2;
        mergeSort(arr,left,mid);
        mergeSort(arr,mid+1,right);
        merge(arr,left,mid,right);
    }

}
template<typename t>
void mergeSort(t arr[],int sizeOfArray){
mergeSort(arr,0,sizeOfArray-1);

}

#endif // MERGESORT_H_INCLUDED
