#include <vector>
#include <bits/stdc++.h>
#include <string>
#include <cmath>

typedef long double ld;

#define fr(n) for (int i = 0; i < n; i++)
#define freq1(n) for (int i = 1; i <= n; i++)
#define freq(n) for (int i = 0; i <= n; i++)
#define fra(a, n) for (int i = a; i < n; i++)
#define ll long long int
#define endl "\n"
#define pb push_back
#define read(x) int x; cin >> x
#define readl(x) ll x; cin >> x
#define readvi(v,n) vector<int> v;fr(n){read(x);v.pb(x);}
#define readvl(v,n) vector<ll> v;fr(n){readl(x);v.pb(x);}
#define yes cout << "YES\n"
#define no cout << "NO\n"
const ld PI = 3.14159265358979323846L;
const ld E = 2.71828182845904523536L;
const ll mod = 1000000007;

using namespace std;

bool sortcol1(const vector<int>& a, const vector<int>& b)
{
    if (a[0]==b[0])
        if(a[1]==b[1])
            return a[2] < b[2];
        else return a[1] > b[1];
    return a[0] < b[0];
}

int main()
{
#ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("TWSP_small_input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("TWSP_small_output.txt", "w", stdout);

#endif
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    //cout << fixed << setprecision(10);
    int t=1;
    cin >> t;
    vector<vector<int>> out;
    fr(t){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> in;
        in.push_back(a);
        in.push_back(b);
        in.push_back(c);
        out.push_back(in);
    }

    sort(out.begin(), out.end(), sortcol1);

    for(auto& it: out){
        for(auto& init: it)
            cout<<init<<" ";
        cout<<endl;
    }

    return 0;
}
