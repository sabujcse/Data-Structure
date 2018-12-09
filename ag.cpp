#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;
    for( int i = 0; i<s1.size(); i++ ){
        if(s1[i] == s2[i]){
            if(s1[i]=='1'){
                printf("0");
            }
            else{
                if(s1[i] =='1' || s2[i]=='1'){
                    printf("1");
                }
                else{
                    printf("0");
                }
            }
        }
        else{
            if(s1[i]=='1' || s2[i]=='1' ){
                printf("1");
            }
            else{
                printf("0");
            }
        }
    }
    printf("\n");
    return 0;
}

