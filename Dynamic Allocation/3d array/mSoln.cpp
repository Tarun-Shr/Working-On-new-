#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,p;
    cin>>n>>m>>p;

    int*** a = new int**[n];

    for(int i=0;i<n;i++){
        a[i] = new int*[m];
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            a[i][j] = new int[p];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<p;k++){
                cin>>a[i][j][k];
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<p;k++){
                cout<<a[i][j][k]<<" ";
            }
        }
    }
}
