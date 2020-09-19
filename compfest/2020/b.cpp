#include<bits/stdc++.h>

using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i <= n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef long long ll;

int main(){
    ll n,m;
    cin >> n >> m;

    ll maks,mins;

    // maks = m/5;
    // mins = m/4;

    // if(maks > m) maks = -1;
    // ll avg = n/m;
    // ll rem = n%m;

    // if(n/m > 5 && n%m == 0){
    //     cout << -1 << " ";
    // }else{
    //     if(n/m == 4){
    //         mins = n%m;
    //         cout << mins << " ";
    //     }else if(n/m == 5 && n%m == 0){
    //         mins = m;
    //         cout << mins << " ";
    //     }else{
    //         mins = 0;
    //         cout << mins << " ";
    //     }
    // }

    // if(n%5 != 0){
    //     if(n/5 > m){
    //         cout << -1;
    //     }else{
    //         cout << n/5;
    //     }
    // }else{
    //     if(n/5 > m) cout << -1;
    //     else
    //     cout << max(mins,n/5 -1);
    // }
    // cout << endl;

    if(m*5 < n || m > n){
        cout << -1 << " " << -1 << endl;
    }else{
        if(n/m == 4){
            cout << n%m;
        }else if(n/m == 5){
            cout << n/5;
        }else{
            cout << 0;
        }
        cout << " ";

        cout << (n-m)/4;
        cout << endl;
    
    }

    // if((n-m)/4 > m){
    //     cout << -1;
    // }else{
    //     cout << (n-m)/4;
    // }
    // cout << endl;
}