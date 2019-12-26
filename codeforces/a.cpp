#include<bits/stdc++.h>

using namespace std;
#define loop(i,n) for(int i = 0; i < n; i ++)
#define pb pushback

int main(){
    int l,r;
    bool check;
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);

    cin >> l >> r;
    for(int i = l; i <= r; i++ ){
        int used = 0;
        check = 0;
        int temp = i;
        while(temp){
            check = used & 1 << temp%10;
            if(check)
                break;
            used |= 1 << temp%10;
            temp = temp/10;
        }
        if(!check){
            cout << i << "\n";
            break;
        }
    }
    if(check)
        cout << -1 << '\n';
    return 0;
    
}