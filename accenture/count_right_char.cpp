#include<bits/stdc++.h>
using namespace std;
void solve(int i,string &str,unordered_map<char,int> &mp){
    if(i<0){
        return;
    }
    int temp=mp[str[i]];
    mp[str[i]]++;
    solve(i-1,str,mp);
    cout<<temp<<" ";
}
int main(){
    string str;
    cin>>str;
    unordered_map<char,int> mp;
    //method1, using map
    // T.C.- O(n) S.C.- O(n)
    // solve(str.length()-1,str,mp);

    //method2 using two for loops
    // T.C.- O(n^2) S.C.- O(1)
    for(int i=0;i<str.length();i++){
        int cnt=0;
        for(int j=i+1;j<str.length();j++){
            if(str[i]==str[j]){
                cnt++;
            }
        }
        cout<<cnt<<" ";
    }
    return 0;
}