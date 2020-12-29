#include <iostream>
#include <cmath>
using namespace std;

typedef long long ll;

void solve(){
    int n;
    cin >> n;
    //more pairs of squares that can't be attack than those that can
    for(int k = 1; k <= n; k++){
        ll init = k*k; // starting number of squares
        ll ans = init*(init-1)/2; // init squares choose 2
        ans -= 4*(k-1)*(k-2); // 4 pairs either attacking 1 or 2 squares
        cout << ans << endl;
    }
    
}

int main(){
    solve();
}