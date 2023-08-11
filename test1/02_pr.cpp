#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
     long long arr[n];
    for(long long i=0;i<n;i++){
        cin>>arr[i];
    }
   
    long long cnt=0;
    long long sum=0;
    for(long long i=0;i<n;i++){
        
        if(arr[i]%6==0){
            cnt++;
            sum+=arr[i];
        }
    }

    cout<<sum/cnt;
    return 0;
}