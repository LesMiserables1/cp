#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

int main(){
    int n;

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    rep(i,n){
        string st;
        string s = "";
        int x = 0;
        cin >> st;
        while(x < st.length()){
            if(st[x] != st[x+1]){
                if(s.find(st[x]) == string::npos){
                    s += st[x];
                }
                x++;
            }else{
                x += 2;
            }
        }
        sort(s.begin(),s.end());
        cout << s << "\n";
    }
}