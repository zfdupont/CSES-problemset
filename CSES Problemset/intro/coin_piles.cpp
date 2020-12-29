#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;


void solve(){
    int a,b;
    cin >> a >> b;
    //YES IF REDUCTABLE DOWN TO EITHER 2/1 1/2 OR 0/0
    //assuming a > b
    //a = 2x+y
    //b = x + 2y
    // a+b = 3x+3y
    //a+b = 3(x+y)
    //a+b % 3 ==0

    if(a < b) swap(a,b);
    if(a>2*b) { //ratio higher than 2:1 = negative coins in b pile
        cout << "NO" << endl;
        return;
    }
    cout << ((a+b)%3==0 ? "YES" : "NO") << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--)
    solve();
}