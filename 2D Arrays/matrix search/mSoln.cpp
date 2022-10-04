#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,no;
    cin>>n>>m>>no;

    int a[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    bool found = false;
    int l =0, r =m-1;

    while(l<n&&r>=0){
         if(no == a[l][r]) {
            found = true;
            break;
         }
         else if(a[l][r]>no) r--;
         else l++;
    }

    if(found) cout<<l+1<< " "<<r+1<<"\n";
    else cout<<"Not Found\n";


    return 0;
}

/*
Test Case:
4 4 no
1 4 7 11
2 5 8 12
3 6 9 16
10 13 14 17
*/
