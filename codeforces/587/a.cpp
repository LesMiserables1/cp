#include<bits/stdc++.h>

using namespace std;
#define loop(i,n) for(int i = 0; i < n; i ++)

const int N = 2e+5;
int main(){
    int n,count = 0;
    char st[N];
    string stemp = ""; 
    
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> n;
    cin >> st;
    loop(i,n){
        cin >> st[i];
    }
    loop(i,n/2){
        if(!((st[i*2] == 'a' && st[i*2+1] == 'b') || (st[i*2] == 'b' && st[i*2+1] == 'a'))){
            stemp = stemp + "ab";
            count++;
        }
        else
            stemp = stemp + st[i*2] + st[i*2+1];
        
    }
    cout << count << '\n' << stemp << '\n';
}