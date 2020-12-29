#include <iostream>

using namespace std;

void solve(){
    long long n;
    cin >> n;
    while(n != 1) {
        cout << n << " ";
        n = (n % 2) ? 3LL*n+1LL : n/2LL;
    }
    cout << 1 << endl;
}

int main(){
    solve();
}