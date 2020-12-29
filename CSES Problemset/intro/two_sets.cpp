#include <iostream>
#include <set>
using namespace std;

typedef long long ll;

/*

1 NO
2 NO
3
1 2
3
4 
2 3 = 5
1 4 = 5
5
1 2 3 4 5 = 15 NO
6 NO
*/

void solve(){
    int n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if(sum % 2){ //if sum of numbers to n is odd cant be split into two
        cout << "NO";
        return;
    }
    cout << "YES" << endl;
    set<int> s1,s2;
    if(n % 4 == 3){
        s1.insert(1);
        s1.insert(2);
        s2.insert(3);
    } else {
        s1.insert(1);
        s1.insert(4);
        s2.insert(2);
        s2.insert(3);
    }
    
    int i = n % 4 == 3 ? 3 : 4;
    
    while(i < n){
        s1.insert(i+1);
        s1.insert(i+4);
        s2.insert(i+2);
        s2.insert(i+3);
        i+=4;
    }
    cout << s1.size() << endl;
    for(auto x : s1){
        cout << x << " ";
    }
    cout << endl;
    cout << s2.size() << endl;
    for(auto x : s2){
        cout << x << " ";
    }
    cout << endl;
    
}

int main(){
    solve();
}