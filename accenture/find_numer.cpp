#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    mp['A']=1;
    mp['B']=2;
    mp['C']=3;
    mp['D']=4;
    mp['E']=5;
    long long ans=0;
    for(int i=0;i<str.length();i++){
        ans=ans*5+mp[str[i]];
    }
    cout<<ans<<endl;
    return 0;
}