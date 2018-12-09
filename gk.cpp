#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x_n;
    cin>>x_n;
    int ar[x_n];
    for( int i = 0; i<x_n; i++ ){
        ar[i] = i+1;
    }
    int zz;
    cin>>zz;
    int xx;
    for( int j = 1; j<=zz; j++ ){
        cin>>xx;
        for( int c= 0; c<x_n; c++ ){
            if(xx==ar[c]){
                ar[c] = 0;
            }
        }
    }
    int zzz;
    cin>>zzz;
    int xxx;
    for( int jj = 1; jj<=zzz; jj++ ){
        cin>>xxx;
        for( int cc= 0; cc<x_n; cc++ ){
            if(xxx==ar[cc]){
                ar[cc] = 0;
            }
        }
    }
    int bound = 0;
    bool flag = true;
    for( int cc = 0; cc<x_n; cc++){
        if(ar[cc] != 0 ){
            flag = false;
        }
    }
    if(flag==false){
        printf("I become the guy.\n");
    }
    else{
        printf("Oh, my keyboard!\n");
    }
    return 0;
}
