#include <bits/stdc++.h>

using namespace std;
using ll=long long;

const bool testcases=true;
const bool filein=false;

void solve(){
    int n, k;
    cin >> n >>  k;
    vector<int> a(n);
    for (int &i:a){
        cin >> a;
    }
    sort(a.begin(), a.end());

    

}


int main(){
    if (filein){
        string f="stacking";
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