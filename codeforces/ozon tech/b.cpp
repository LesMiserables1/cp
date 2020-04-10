#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
        string st;
        cin >> st;
        set<int> hsl;
        vector<int> op;
        int x = st.length();
        rep(i,st.length()){
            if(st[i]=='('){
                while(x-- >=0){
                    if(st[x] == ')' && i < x){
                        hsl.emplace(x);
                        hsl.emplace(i);
                        break;
                    }
                }
            }
        }
        // (()())
        if(hsl.size() == 0){
            cout << 0 << endl;
            return 0;
        }
        cout << 1 << '\n' << hsl.size() << '\n';
        for(auto i : hsl){
            cout << i+1 << " ";
        }
        cout << endl;
}