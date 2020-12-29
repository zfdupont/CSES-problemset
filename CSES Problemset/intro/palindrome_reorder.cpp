#include <iostream>
#include <string>

using namespace std;

typedef long long ll;


void solve(){
    string s;
    cin >> s;
    int map[26]{};
    int odd{};
    for(auto c : s){
        ++map[c - 'A'];
    }
    for(int i = 0; i < 26; i++){
        if(map[i] % 2) odd++;
    }
    string ans;
    if(odd > 1) {
        cout << "NO SOLUTION" << endl;
        return;
    }
    int last;
    for(int i = 0; i < 26; i++){
        if(map[i] % 2){
            last = i;
            continue;
        }
        ans.insert(ans.begin(), map[i]/2, 'A'+i);
        ans.insert(ans.end(), map[i]/2, 'A'+i);
    }
    if(odd == 1){
        ans.insert(ans.begin()+ans.size()/2, map[last], 'A'+last);
    }
    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
}