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
    for(int k = 1; k <= T;k++){
        string st;
        cin >> st;
        string s = "";
        char prev = '0';
        for(int i = 0; i < st.length(); ++i){
            int itr = st[i] - prev;
            for(int j = 0; j < itr; ++j){
                s += '(';
            }
            char next = st[i+1];
            s += st[i];
            if (i == st.length()-1) next = '0';
            itr = st[i] - next;
            for(int j = 0; j < itr ; ++j){
                s += ')';
            }
            prev = st[i];
        }
        cout << "Case #" << k << ": " << s << endl;

    }
}