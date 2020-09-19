#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll x,y,k;
        cin >> x >> y >> k;
        ll needed_sticks = k*y + k;

        ll needed_mv = 1;
        if(needed_sticks/x < 1 || (needed_sticks/x == 1 && needed_sticks%x == 0)){
            cout << 1 << endl;
            continue;
        }else{
            needed_sticks -= x;
            needed_mv += needed_sticks/(x-1) + k;
            if(needed_sticks%(x-1)) needed_mv++;
        }
        cout << needed_mv << endl;
    }
}