#include <bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    int z = 1;
    while(z<=T){
        int n;
        cin>>n;
        int a[n];
        int i,d,start,ans,len;
        for(i=0;i<n;i++) cin>>a[i];
        d = a[1]-a[0];
        start = 0;
        ans = len = 1;
        for(i=1;i<n;i++){
            if(a[i]-a[i-1]!=d){
                start = i;
                d = a[i] - a[i-1];
                if(len>ans) ans = len;
                len = 1;
            }
            len++;
        }
        if(len>ans) ans = len;
        cout<<"case #"<<z<<": "<<ans<<"\n";
        z++;
    }
}
