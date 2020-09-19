#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

const int N = 1e5+1;
int main(){
    int tc; cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        int pref_1[N] = {0};
        int pref_0 = 0;
        string st,rsl = "";
        cin >> st;
        for(int i = st.length()-1; i >= 0; --i) {
            if(st[i] == '1') {
                rsl += '1';
            }else{
                break;
            }
        }
        for(int i = st.length()-1; i >= 0; --i) {
            if(st[i] == '0') {
                pref_0++;
            }else{
                if(pref_0 > 0){
                    pref_0 = 1;
                }
            }
        }
        for(int i = 0; i < pref_0; ++i){
            cout << '0';
        }
        cout << rsl << endl;
    }
}