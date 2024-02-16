#include <bits/stdc++.h>
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
#define sy cout << "YES\n"
#define sn cout << "NO\n"
#define se cout << '\n'
#define sp " "
using namespace std;


/*
X^X = 0
*/

int main() {
    int t = 1;
    // cin>>t;
    while (t--)
    {
        int n;cin>>n;
        int arr[n];
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
            
            ans ^= arr[i];
            
        }
        cout<<ans;
        
    }
    
    return 0;
}