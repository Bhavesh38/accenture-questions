#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
         cin>>arr[i];
    }
    int firstMax=INT_MIN;
    int secondMax=INT_MIN;
    for(int i=0;i<n;i++){
        firstMax=max(firstMax,arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=firstMax){
            secondMax=max(secondMax,arr[i]);
        }
    }
    int ans1=0;
    int ans2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==firstMax){
            ans1++;
        }
        if(arr[i]==secondMax){
            ans2++;
        }
    }

    if(ans1>0){
        ans1--;
    }
    if(ans2>0){
        ans2--;
    }
    cout<<ans1+ans2<<endl;
    return 0;
}