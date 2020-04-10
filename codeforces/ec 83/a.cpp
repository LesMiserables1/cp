#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

long long gcd (long long x,long long y){	
    return x ? gcd(y%x,x) : y; 
}

int main(){
    int tc;
    cin >> tc;
    while(tc--){
        int n,m;
        cin >> n >> m;
        if(n%m == 0){
            cout << "YES";
        }else
            cout << "NO";
        cout << endl;
    }
}