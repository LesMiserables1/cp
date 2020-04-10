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
        int arr[5001];
        rep(i,n){
            cin >> arr[i];
        }
        bool status = 0;
        rep(i,n){
            int j = n-1;
            while(j >= i) {
                if(arr[i] == arr[j])
                    break;
                j--;
            }
            if(j-i >= 2){
                status =1;
                break;
            }

        }
        status ? cout << "YES" : cout << "NO";
        cout << endl;
    }
}