#ifndef LINEARSEARCH_H_INCLUDED
#define LINEARSEARCH_H_INCLUDED

template<typename T>
bool linearSearch(T arr[],int arrSize,T key){
for(int i=0;i<arrSize;i++){
    if(arr[i]==key)return true;
}
return false;
}


#endif // LINEARSEARCH_H_INCLUDED
