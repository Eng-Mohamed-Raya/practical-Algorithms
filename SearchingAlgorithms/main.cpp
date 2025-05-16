#include <iostream>
#include"LinearSearch.h"
#include"BinarySearch.h"
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of elements :";
    cin>>n;
    int a[n],key;
    cout<<"Enter "<<n<<" items : "<<endl;
    for(int i=0;i<n;i++)cin>>a[i];
    cout<<"Enter element do you need search :";cin>>key;
    //linear search
    cout<<"Linear Search:\n"<<key<<" ";
    (linearSearch(a,n,key))?cout<<"is found\n":cout<<"is not found\n";

     //Binary search
    cout<<"Binary Search:\n"<<key<<" ";
    (binarySearch(a,n,key))?cout<<"is found\n":cout<<"is not found\n";

    return 0;
}
