#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //method1
    // if(m==1){
    //     cout<<n<<endl;
    // }else{
    //     int temp=n/m;
    //     int r=n%m;
    //     int sum=temp+r;
    //     cout<<sum<<endl;
    // }


    //method2
    cout<<n/m + (n%m)<<endl;
    return 0;
}