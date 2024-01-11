#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;
const int N = 1e5+1;
int dp[N];

int solve(int n,int arr[]){
    if(n==1){
        return 0;
    }
    if(dp[n]!=-1)return dp[n];
    else if(n==2){
        return dp[n] = abs(arr[n]-arr[1]);
    }else{
        int choice1 = solve(n-1,arr)+abs(arr[n]-arr[n-1]);
        int choice2 = solve(n-2,arr)+abs(arr[n]-arr[n-2]);
        return dp[n] = min(choice1,choice2);
    }
}

int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n+1];
        for (int i = 1; i <= n; i++)
        {
            dp[i] = -1;
            cin>>arr[i];
        }
        
       cout<< solve(n,arr);
    }
    
    return 0;
}