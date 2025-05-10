#ifndef FIBONACCI_NUMBERS_H_INCLUDED
#define FIBONACCI_NUMBERS_H_INCLUDED
#include<vector>
//DP top-down approach ( Memoization )

int fibNumDpByTD(int n,vector<int>&db){

    if(n<=1)return n;
    if(db[n]!=-1)return db[n];
    return db[n]=fibNumDpByTD(n-1,db)+fibNumDpByTD(n-2,db);
}

#endif // FIBONACCI_NUMBERS_H_INCLUDED
