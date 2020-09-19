#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int p,q,m;
        cin >> p >> q >> m;

        while(m > 0){
            if(p > q){
                p /= 2;
            }else{
                q /= 2;
            }
            m--;
        }
        if(p > q)
        cout << p << " " << q << endl;
        else
        cout << q << " " << p << endl;

    }
}