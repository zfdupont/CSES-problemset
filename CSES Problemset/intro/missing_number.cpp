#include <iostream>

using namespace std;

void solve(){
    int n;
    cin >> n;
    long long x{}, sum{};
    int t;
    for(int i = 1 ; i < n; i++){
        cin >> t;
        sum += t;
        sum -= i;
    }
    cout << n - sum;
}

int main(){
    solve();
}