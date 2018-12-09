#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    int n, m;
    cin>>n>>m;
    int x, y;
    int arr[m];
    for(int i = 1; i<=m; i++ ){
        arr[i] = 1;
    }
    for(int i=1; i<=n; i++){
        cin>>x>>y;
        for( int j = x; j<=y; j++ ){
                 if(arr[j]==1){
                    arr[j] = 0;
                }
        }
    }
    int c = 0;
    for( int x = 1; x<=m; x++){
        if(arr[x]==1){
            c++;
        }
    }
    if(c==0){
        printf("0\n");
    }
    else{
            printf("%d\n",c);
        int yy =0;
        for( int y = 1;y<=m; y++){
            if(arr[y]==1){
                yy++;
               if(yy==c){
                printf("%d\n",y);
               }
               else{
                 printf("%d ",y);
               }
            }
        }
    }
    */
    int xx;
    cin>>xx;
    int r[xx];
    for( int i = 1; i<=xx; i++ ){
        cin>>r[i];
        if(r[i]%2==0){
            r[i]--;
        }
    }
    for(int j = 1; j<=xx; j++){
            if(j==xx){
                printf("%d\n",r[j]);
            }
            else{
               printf("%d ",r[j]);
            }
    }
    return 0;
}
