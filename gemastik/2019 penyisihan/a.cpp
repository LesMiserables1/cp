#include<bits/stdc++.h>
using namespace std;

#define pb push_back
#define loop(i,a,b) for(int i = a;i < b; i++)
#define mp make_pair

int main(){
    int n,m;
    string st;

    cin >> n >> m;
    cin >> st;

    loop(i,0,st.length()){
        if(st[i] == 't'){
            n--;
        }else if(st[i] =='u'){
            m--;
        }else if(st[i] =='s'){
            m++;
        }else if(st[i] == 'b'){
            n++;
        } 
    }
    cout << n << " "<< m << endl;   
}