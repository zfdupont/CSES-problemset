#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

typedef long long ll;


ll f(int n){
    int ans{1};
    for(int i = n; i > 0; i--) ans*=i;
    return ans;
}

void solve(){
    
    string s;
    int map[26]{};
    cin >> s;
    ll n{1};
    for(auto c : s){
        map[c-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(map[i] == 0) continue;
        n *= f(map[i]);
    }
    cout << (f(s.size())/n) << endl;
    sort(s.begin(), s.end());
    do{
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}