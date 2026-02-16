#include <iostream>
#include <vector>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(NULL);

using ll = long long;
using vll = vector<ll>;

ll solve(int n) {
    //base case
    if(n==0) return 1;

    // recursive case;
    return 2*solve(n-1);
}

int main() {
    fastio;

    // int t; cin>>t;
    // while (t--) 
    ll n; cin>>n;
        cout<<solve(n)<<" ";
    return 0;
}