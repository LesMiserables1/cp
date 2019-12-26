#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define rep1(i,n) for (int i = 1; i <= n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
typedef vector<int> vi;

int gcd(int x,int y){
    return x ? gcd(y%x,x) : y;
}

void solve(){
    int a,b;
    cin >> a >> b;
    if(gcd(a,b) != 1)
        cout << "Infinite\n";
    else
        cout << "Finite\n";    
}

int main(){
    int tc;
    cin >> tc;

    while(tc--){
        solve();
    }
}