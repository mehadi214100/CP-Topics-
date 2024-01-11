#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;

int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n+1];
        int dp[n+1];
        for (int i = 1; i <= n; i++)
        {
            cin>>arr[i];
        }
         
        dp[1] = 0;
        dp[2] = abs(arr[2]-arr[1]);
        for (int i = 3; i <= n; i++)
        {
            int choice1 = dp[i-1] + abs(arr[i]-arr[i-1]);
            int choice2 = dp[i-2] + abs(arr[i]-arr[i-2]);
            dp[i] = min(choice1,choice2);
        }
        
        cout<<dp[n];
    }
    
    return 0;
}