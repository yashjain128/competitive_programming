#include <bits/stdc++.h>

using namespace std;
using ll=long long;
using ull=unsigned long long;

const bool testcases=true;
const bool filein=false;
const string f="stacking";
const int maxn = 5001;

struct key{
    int x;
    bool h;
};

void solve(){
    int n, k, q;
    cin >> n >> k >> q;


    vector<int> a(n+1);
    for (int i=1; i<=n; i++){
        int x;
        cin >> x;

        a[i] = a[i-1];
        a[i] += x<k; 
    }


    vector<int> qs(q);
    for (int i=0; i<q; i++){
        int l, r;
        cin >> l>> r;

        qs[i] = l;
    }


    map<int, int> cnt;
    for (int i=0; i<k; i++){
        cnt[a[i]]++;
    }
    vector<int> ans;
    for (int i=0; i<n-k; i++){
        

    }

}  

int main(){
    if (filein){
        freopen((f+".in").c_str(), "r", stdin);
        freopen((f+".out").c_str(), "w", stdout);
    }
    else{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout<<fixed<<setprecision(0);
    }
    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}