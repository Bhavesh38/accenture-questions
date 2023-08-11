#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){ 
        cin>>arr[i];
    }
    int max_sum = arr[0];
    int curr_sum = 0;
    int len = 1;
    for(int i=1;i<n;i++)
    {
        if(curr_sum + arr[i] < max_sum)
        {
            curr_sum += arr[i];
        }
        else{
            curr_sum += arr[i];
            max_sum = max(max_sum , curr_sum);
            len++;
            curr_sum = 0;
        }
    }
    cout<<len<<endl;
    return 0;
}