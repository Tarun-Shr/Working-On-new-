#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int a[n][n];

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            a[i][j] = a[i][j]+a[j][i];
            a[j][i] = a[i][j]-a[j][i];
            a[i][j] = a[i][j]-a[j][i];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
