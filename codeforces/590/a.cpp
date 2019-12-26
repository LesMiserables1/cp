#include<bits/stdc++.h>
using namespace std;

#define pb push_back()
#define loop(n) for(int i = 0;i < n; i ++);

int main(){
    
    long long tc,n,harga;
    
    cin >> tc;
    for (int i = 0; i < tc; i++)
    {
        int hargaT = 0;
        cin >> n;
        for(int j = 0; j < n; j++){
            cin >> harga;
            hargaT += harga;
        }
        cout << (hargaT + n -1)/hargaT << '\n';
    }
}