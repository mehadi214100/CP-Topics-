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
        int v[n],w[n];
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>w[i];
        }
        int s;cin>>s;
        
        int dp[n+1][s+1];

        for (int i = 0; i <= n; i++)
        {
            dp[i][0] = 0;
        }

        for (int i = 0; i <= s; i++)
        {
            dp[0][i] = 0;
        }      

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= s; j++)
            {
                if(j>=w[i-1]){
                    int op1 = dp[i-1][j-w[i-1]] + v[i-1];
                    int op2 = dp[i-1][j];
                    dp[i][j] = max(op1,op2);
                }else{
                    dp[i][j] = dp[i-1][j];
                }
            }
            
        }
        


        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= s; j++)
            {
                cout<<dp[i][j]<<sp;
            }
            cout<<endl;
        }
        
        
        
    }
    
    return 0;
}