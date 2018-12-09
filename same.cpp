
#include<bits/stdc++.h>
using namespace std;

int  main()
{
    int n;
    cin>>n;
    int r[n];
    for( int i = 0; i<n; i++ ){
        cin>>r[i];
    }
    int c = 0;
    int x = n;
    int f = (x/2)+1;
    int xx = 0;
    for( int i = n-1; i>=f; i-- ){
        for( int j = 0; j<n; j++ ){
                int y = r[j];
            if(r[i]<=y*2){
                c++;
            }
        }
         if(c>xx){
                cout<<c<<endl;
                xx = c;
                c = 0;
            }
    }
    cout<<xx<<endl;
    return 0;
}
