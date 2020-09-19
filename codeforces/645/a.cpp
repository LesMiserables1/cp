#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int T; cin >> T;
    while(T--){
        int n,m;
        cin >> n >> m;
        int rslt = m/2 * n;
        if(m%2){
            if(n%2) n++;
            rslt += n/2;
        }
        cout << rslt << endl;
    }
}