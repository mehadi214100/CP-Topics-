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
        ll n;cin>>n;
        ll arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        for (int i = 2; i < n; i++)
        {
            arr[i] = arr[i-1] + arr[i-2];
        }
        
        for (int i = 0; i < n; i++)
        {
            cout<<arr[i]<<sp;
        }
        

    }
    
    return 0;
}