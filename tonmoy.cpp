#include <bits/stdc++.h>
using namespace std;
int lds(int arr[], int n)
{
    int lds[n];
    int i, j, max = 0;
    for (i = 0; i < n; i++)
        lds[i] = 1;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] < arr[j] && lds[i] < lds[j] + 1)
                lds[i] = lds[j] + 1;
    for (i = 0; i < n; i++)
        if (max < lds[i])
            max = lds[i];
    return max;
}
int main()
{
    int x;
    cin>>x;
    int arr[x];
    for( int i = 0; i<x; i++ ){
        cin>>arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of LDS is " << lds(arr, n);
    return 0;
}

