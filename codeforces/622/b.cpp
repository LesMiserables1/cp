#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        ll n,x,y;
        cin >> n >> x >> y;
        ll med = (n*2 + 2) /2;
        ll worst,best;
        
        if(x+y < med) best = 1;
        else best = min((x+y)-med + 2,n);

        if(x+y >= med) worst = n;
        else worst = x+y - 1;
        
        cout << best << " " << worst << endl;
    }
}