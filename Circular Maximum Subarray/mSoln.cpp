#include <bits/stdc++.h>
using namespace std;

int kadane(int a[],int n){
    int max_sum = INT_MIN, i;
    int current = 0;
    for(i=0;i<n;i++){
        current+=a[i];
        if(current<0) current = 0;
        max_sum = max(max_sum,current);
    }
    return max_sum;
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    int n,i,max_s,max_c,sum=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }

    max_s = kadane(a,n);

    for(i=0;i<n;i++) a[i] = -a[i];

    max_c = sum + kadane(a,n);

    cout<<max(max_c,max_s)<<"\n";

}
