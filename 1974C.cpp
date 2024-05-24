// Not Understand
#include<bits/stdc++.h>
 
using namespace std;
using ll = long long int;
const ll MOD = 1e9+7;
 
 
void solve()
{   
    ll n; cin >> n;
    ll a, b, c;
    map<tuple<ll,ll,ll>, ll> kek;
    ll ans = 0;
    cin >> a >> b;
    for(ll i = 0; i <n-2; i++){
        cin >> c;
        ans+=kek[{0,b,c}]++;
        ans+=kek[{a,0,c}]++;
        ans+=kek[{a,b,0}]++;
        ans-= 3*kek[{a,b,c}];
        kek[{a,b,c}]++;
        a=b;
        b=c;
    }
    cout << ans;
    return;
}
 
 
int main()
{   
    // ios_base :: sync_with_stdio(0); cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
        cout << "\n";
    }
    return 0;
}