#include <iostream>

using namespace std;

typedef long long ll;


void solve(){
    ll n;
    cin >> n;
    int ans{};
    while(n){
        ans += (n/=5);
    }
    cout << ans;
    
}

int main(){
    solve();
}