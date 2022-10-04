#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,i,j;
    cin>>n>>m;

    int a[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
                cin>>a[i][j];
        }
    }

    int s_r,s_c,e_r,e_c;
    s_r = s_c = 0;
    e_r = n-1;
    e_c = m-1;

    while(s_r<=e_r&&s_c<=e_c){
        for(i=s_c;i<=e_c;i++) cout<<a[s_r][i]<<" ";
        s_r++;
        if(s_r>e_r) break;
        for(i=s_r;i<=e_r;i++) cout<<a[i][e_c]<<" ";
        e_c--;
        if(e_c>s_c) break;
        for(i=e_c;i>=s_c;i--) cout<<a[e_r][i]<<" ";
        e_r--;
        if(e_r>e_c) break;
        for(i=e_r;i>=s_r;i--) cout<<a[i][s_c]<<" ";
        s_c++;

    }

}
