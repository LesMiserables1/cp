#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,m,b;
    int jumlah = 0;
    cin >> n >> m >> b;

    if(n % b != 0 )
        jumlah++;
    if(m % b != 0)
        jumlah++;
    
    jumlah += n/b + (m-(n/b)*b) /b;
    cout << jumlah << endl;
}   