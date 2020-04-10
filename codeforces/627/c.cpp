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
        string st;
        cin >> st;
        int x = -1;
        int gap = 0;
        int prev = -1;
        rep(i,st.length()){
            if(st[i]=='R'){
                gap = max(gap,i-prev);
                x = i;
                prev = i;
            }
        }
        if((st.length()-x) > gap) {
            cout << st.length()-x;
        } else cout << gap;
        cout << endl;
    }
}