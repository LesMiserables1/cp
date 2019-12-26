#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
typedef vector<int> vi;

void solve(){
    long long a,b,n,s,temp;

    cin >> a >> b >> n >> s;

    temp = s/n;
    a = a > temp ? temp : a;
    s = s - n*a;
    if(s > 0 ){
        if(s-b <= 0)
            cout << "YES\n";
        else
            cout << "NO\n";
    }else
        cout << "YES\n";
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}