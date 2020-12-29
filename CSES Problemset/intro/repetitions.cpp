#include <iostream>
#include <string>

using namespace std;


int arr[1000001]{};

void solve(){
    string s;
    cin >> s;
    for(int i = 1; i < s.size(); i++){
        if(s[i] == s[i-1]) arr[i] = 1+arr[i-1];
    }
    int ans{};
    for(int i = 1; i < s.size(); i++){
        if(arr[i] > ans) ans = arr[i];
    }
    cout << ans+1;
}

int main(){
    solve();
}