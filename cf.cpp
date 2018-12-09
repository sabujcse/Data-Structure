#include<bits/stdc++.h>
using namespace std;
int mian()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    reverse(s1.begin(),s1.end());
    if(s1==s2){
        printf("YRS\n");
    }
    else{
        printf("NO\n");
    }
    return 0;
}

