#include <iostream>
#include"FibonacciNummbers.h"

using namespace std;

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<"fib of "<<n<<" by top-down approach  = "<<fibNumDpByTD(n)<<endl;
    cout<<"fib of "<<n<<" by bottom-up approach = "<<fibNumDpByBU(n)<<endl;
    return 0;
}
