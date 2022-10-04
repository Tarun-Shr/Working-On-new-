#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,i,_minIndex = INT_MAX;
    cin>>n;
    bool found = false;
    int a[n];
    int check[100000];
    fill_n(check,100000,-1);
    for(i=0;i<n;i++) cin>>a[i];
    for(i=0;i<n;i++){
        if(check[a[i]]!=-1){
            found = true;
            if(_minIndex>check[a[i]]) _minIndex = check[a[i]];
        }
        check[a[i]]=i;
    }
    if(found) cout<<_minIndex+1<<"\n";
    else cout<<"-1\n";

    return 0;
}
