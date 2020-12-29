#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

typedef long long ll;

ll p[21];

void solve(){
    int n;
    ll sum{}, ans{0x3f3f3f3f};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> p[i];
        sum += p[i];
    }
    //brute force search
    //see representing sets w binary
    for(ll i = 0; i < 1 << n; i++){
        ll s = 0;
        for(ll j = 0; j < n; j++){
            if(i & 1 << j) s+= p[j];
        }
        ll curr = abs(sum - 2*s);
        ans = min(ans, curr);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}