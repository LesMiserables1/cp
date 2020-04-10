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
        int n;
        cin >> n;
        string st = "";
        if(n == 1){
            cout << "-1\n";
            continue;        
        }
        for(int i = 3; i <= n; i++){
            st += '3';
        }
        cout << st << 2<<3 << endl;
    }
}