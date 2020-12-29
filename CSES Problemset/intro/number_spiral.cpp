#include <iostream>
#include <cmath>
using namespace std;

void solve(){
    long x,y,z; 
    cin >> x >> y;
    z = x > y ? x : y; //layer of spiral
    //z*(x-1)+1 corner value
    //-1^z going up or down
    // (x-y) how many spaces
    cout << z * (z-1) + 1 + (int)pow(-1, z) * (x-y) << endl;
    
}

int main(){
    int t;
    cin >> t;
    while(t--) solve();
}