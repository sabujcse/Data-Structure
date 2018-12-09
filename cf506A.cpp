
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int t, c;
    cin>>t>>c;
    string s;
    cin>>s;
    char g = s[0];
    bool flag = true;
    int yy = s.size()-1;
    int cc = 0;
    bool fl = true;
    for( int y = 0; y<s.size(); y++ ){
        if(s[y] == s[yy] && fl && y!=yy){
            cc++;
            yy--;
        }
        else{
            break;
        }
    }
    if(cc>1){
        cout<<s;
        for( int b = 1; b<=c-1; b++){
        for(int z = cc; z<s.size(); z++){
            cout<<s[z];
        }
        }
        cout<<endl;

    }
    else{
    for( int xx = 1; xx<s.size(); xx++ ){
        if(g!=s[xx]){
           flag = false;
        }
    }
    if(!flag){
    if(s[0] == s[s.size()-1]){
        cout<<s;
        for( int x = 0; x<c-1; x++ ){
        for( int i = 1; i<s.size(); i++ ){
            printf("%c",s[i]);
        }
        }
        cout<<endl;
    }
    else{
        for(int i = 1; i<=c;i++ ){
            cout<<s;
        }
        cout<<endl;
    }
    }
    else{

        cout<<s;
        for( int i = 1; i<c; i++ ){
            cout<<s[0];
        }
        cout<<endl;
    }
    }
    return 0;
}
