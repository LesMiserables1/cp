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
    
    int count_n = n/2;
    if(count_n + n - 1 > 101){
        cout << -1 << endl;
    }else{
        cout << count_n << endl;
        for(int i = 0; i < count_n; ++i){
            cout << 'L';
        }
        for(int i = 0; i < n-1; ++i){
            cout << "G";
        }
        if(count_n) cout << endl;
    }
}