#include <iostream>

using namespace std;

long arr[200001]{};

void solve(){
    int n;
    long ans{};
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]) {
            ans += (arr[i] - arr[i+1]);
            arr[i+1] = arr[i];
        }
    }
    cout << ans;
}

int main(){
    solve();
}