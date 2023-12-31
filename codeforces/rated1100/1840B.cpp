#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;

#define llmax LLONG_MAX;
#define llmin LLONG_MIN;
#define mod 1000000007;

#define rep(x,y,z) for(int x=(y);x<=(z);x++)

const bool testcases = true;
void solve(){
    ll n, k;
    cin >> n >> k;

    k = min(63LL, k);         
    cout << min(n, (1ll<<k)-1)+1 <<'\n'; 

}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);
    ll t=1;
    if (testcases) cin >> t;
    while(t--) solve();
    return 0;
}

