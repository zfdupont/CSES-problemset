#include <iostream>

using namespace std;

/*
8
2 4 6 8 1 3 5 7 
7
2 4 6 1 3 5 7 
6
2 4 6 1 3 5
5
2 4 1 3 5
4
2 4 1 3
3
DNE
2
DNE
1
1
*/

void solve(){
    int n; 
    cin >> n;
    if(n == 2 || n == 3) {
        cout << "NO SOLUTION";
        return;
    }
    for(int i = 2; i <= n; i+=2) cout << i << " ";
    for(int i = 1; i <= n; i+=2) cout << i << " ";
}

int main(){
    solve();
}