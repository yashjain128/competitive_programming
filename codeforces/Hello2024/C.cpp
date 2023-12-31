#include <bits/stdc++.h>

using namespace std;

const bool testcases=true;
void solve(){
    int n;
    cin >> n;

    vector<int> a(n);

    for (int &i:a){
        cin >> i;
    }

    int s=INT_MAX, t=INT_MAX;
    int g=0;
    for (int i=0; i<n; i++){

        if (a[i]>s){
            t = a[i];
            g++;
        }
        else if (a[i]<=t){
            t = a[i];
        }
        else if (a[i]<=s){
            s = a[i];
        }

        if (s<t) swap(s, t);
    }

    cout << g << '\n';
}


int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout<<fixed<<setprecision(0);

    int t=1;
    if (testcases) cin >> t;
    while (t--)	solve();

    return 0;
}