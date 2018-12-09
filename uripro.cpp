#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int i = 1;
    while(scanf("%d",&n)!=EOF){
         int u = n;
           int sum = 1;
            while(u>0){
                sum+=u;
                u--;
            }
    if(n==0){
        printf("Caso %d: 1 numero\n",i);
        printf("0\n");
    }
    else{
        printf("Caso %d: %d numeros\n",i,sum);
        printf("0 ");
        int yy = 1;
        for( int k = 1; k<=n; k++ ){
            for( int h = 1; h<=k; h++ ){
                 yy++;
                if(yy==sum){
                    printf("%d\n",k);
                }
                else{
                    printf("%d ",k);
                }

            }
        }
    }
    i++;
    printf("\n");
    }
    return 0;
}
