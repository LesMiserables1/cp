#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define mp make_pair
#define rep(i,n)  for (int i = 0; i < n; i++)
#define loop(i,a,n)  for (int i = a; i < n; i++)

int main(){
    int n,m;
    cin >> n >> m;

    if(m-n == 1){
        cout << n << "9" << " " << m << "0\n";
    }else
    if(m-n == 0){
        cout << n << "0" << " " << m << "1\n";
    }else{
        cout << "-1\n";
    }
}