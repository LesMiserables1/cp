#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)
#define deb(x) cout << #x << " = " << x <<'\n'
typedef vector<int> vi;

void solve(){

}

int main(){
    long long tc;
    cin >> tc;

    int div = sqrt(tc);
    
    int n = div+1;
    loop(i,2,n){
        if(tc%i == 0){
            div = i;
            break;
        }
    }
    div = tc%div == 0 ? div : tc;
    cout << div ;
    cout << "\n";
}