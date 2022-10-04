#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    char arr[n+1];
    cin.ignore();
    cin.getline(arr,n);
    cin.ignore();
    int len = 0,ans=0,i=0,start;

    while(i<n){
        if(arr[i] != ' ') len++;
        else {
            ans = max(ans,len);
            len = 0;
            start = i+1;
        }
        i++;
    }


    cout<<max(ans,len)<<" ";
    for(int i=0;i<max(ans,len);i++) cout<<arr[i+start];
}