#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,q;
    cin>>n>>m>>q;

    int a[n][m],b[m][q],ans[n][q];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            ans[i][j]=0;
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            for(int k=0;k<m;k++){
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }



    for(int i=0;i<n;i++){
        for(int j=0;j<q;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}
