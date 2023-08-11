#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    long long ans=0;
    for(int i=0;i<str.length();i++){
        int temp=str[i]-'A'+1;
        ans=ans*26+temp;
    }
    cout<<ans<<endl;
    return 0;
}
