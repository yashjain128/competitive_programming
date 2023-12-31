#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1e9+7;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

void solve(){

    ll n;
    cin >> n;

    ll a[n];
    for (ll i=0; i<n; i++){
        cin >> a[i];
    }
    
    ll ans = 0;
    for (ll i=0; (i+1)*2<=n; i++){
        ll d = abs(a[i] -  a[n-i-1]);
        ans = __gcd(ans, d); 
    }
    cout << ans <<'\n';
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll t;
    cin >> t;
    while(t--) solve();
    return 0;
}
