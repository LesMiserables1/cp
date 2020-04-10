#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

void solve(){
    string st;
    cin >> st;
    bool check = 0,check1 = 0;
    int hsl = 0;
    int hasil = 0;
    rep(i,st.length()){
        if(check){
            if(st[i]=='0'){
                hsl++;
            }
            if(hsl>0 && st[i]=='1'){
                hasil += hsl;
                hsl = 0;
            }
        }else if(st[i]=='1'){
            check = 1;
        }

    }
    cout << hasil;
    cout << endl;
}
int main(){
    int tc;
    cin >> tc;
    while(tc--){
        solve();
    }
}