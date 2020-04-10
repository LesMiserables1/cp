#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    int n;
    cin >> n;
    string st;
    cin >> st;
    
    string prev = st;
    int hsl = 0;
    loop(i,1,n-1){
        string s;
        s += st[i];
        int x = i;
        if(i == n-1) s = "";
        rep(j,n-1){
            x += 1;
            if(x >= n){
                x = 0;
            }
            if(i == (n-1)){
                s += st[st.length()-1-x];
            }else{
                s += st[x];
            } 
        }
        if(i == n-1) s += st[0];
        if((n%2 == 1 && i == (n-1)/2) || (n%2 == 0 && i == (n-1)/2 + 1)){
            s = st.substr(i,(n-1)/2+1);
            for(int j = i-1; j>=0;j--){
                s += st[j];
            }
        }
        if(prev > s){
            hsl = i;
            prev = s;
        }
    }
    cout << prev << '\n' << hsl+1 << endl;
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}