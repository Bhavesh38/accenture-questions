#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long mod=1000000007;
    long long ans=0;
    for(int i=1;i<=n;i++){

        long long cnt2=0;
        long long cnt4=0;
        long long cnt8=0;
        long long num=i;
        while(num>0){
            if(num%10==2){
                cnt2++;
            }
            else if(num%10==4){
                cnt4++;
            }
            else if(num%10==8){
                cnt8++;
            }
            num=num/10;
        }
        if(cnt2==cnt4 && cnt4==cnt8 && cnt2>0){
            ans=(ans+1)%mod;
        }
    }
    cout<<ans<<endl;
    return 0;
}