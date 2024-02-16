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
        int ct = 0;
        while (n>0)
        {
            if(n&1) ct++;
            n = n>>1;
        }
        cout<<ct;
           
    }
    
    return 0;
}