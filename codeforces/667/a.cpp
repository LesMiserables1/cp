#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int tc; cin >> tc;
    while(tc--){
        ll a,b;
        cin >> a >> b;
        
        (abs(a-b)%10 == 0)  ? cout << abs(a-b)/10 : cout << abs(a-b)/10 + 1;
        cout << endl;
         
    }
}