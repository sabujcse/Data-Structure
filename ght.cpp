#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    int j = s2.size()-1;
    int c = 0;
    for( int i = 0; i<s1.size(); i++ ){
        if(s1[i] == s2[j] ){
            c++;
        }
        j--;
    }
    if(c==s1.size()){
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
    return 0;
}
