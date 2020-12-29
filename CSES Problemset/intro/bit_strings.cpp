#include <iostream>

using namespace std;

typedef long long ll;


void solve(){
    ll n, ans{1};
    cin >> n;
    for(int i = 0; i < n; i++) ans = (ans<<1)%((int)1e9+7);
    cout << ans << endl;
    
}

int main(){
    solve();
}