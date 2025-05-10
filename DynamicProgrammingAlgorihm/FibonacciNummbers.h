#ifndef FIBONACCINUMMBERS_H_INCLUDED
#define FIBONACCINUMMBERS_H_INCLUDED

#include<vector>
using namespace std;

//DP top-down approach ( Memoization )
long long fibNumDpByTD(int n,vector<long long>&db){

    if(n<=1)return n;
    if(db[n]!=-1)return db[n];
    return db[n]=fibNumDpByTD(n-1,db)+fibNumDpByTD(n-2,db);
}
//helper function to call in main fun
long long fibNumDpByTD(int n){
    vector<long long>db(n+1,-1);//-1 is initial value in vector
return fibNumDpByTD(n,db);
}


//DP bottom-up approach ( Tabulation )
long long fibNumDpByBU(int n)
{
    if(n<=1)return n;
    vector<long long> db(n+1);
    db[0]=0;db[1]=1;
    for(int i=2;i<=n;i++){
        db[i]=db[i-1]+db[i-2];
    }
    return db[n];
}
#endif // FIBONACCINUMMBERS_H_INCLUDED
