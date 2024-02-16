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
    cin>>t;
    while (t--)
    {
        ll n;
        cin>>n;
        ll k = 1;
        while ((k<<1)<=n)
        {
            k= k<<1;
        }
        cout<<k-1<<endl;
        
    }
    
    return 0;
}