#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    
    cin >> s;
    int check = 0;
    int checknol = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i] == '1'){
            check++;
        }else
            checknol++;
    }
    
    if(check == 1){
        if (checknol % 2 != 0)
            cout << ((s.length() - 1)/2) + 1 << '\n';
        else
            cout << (s.length() - 1)/2 << '\n';
    }
    else if(check == 0)
        cout << 0 << '\n';
    else if(check >1 || checknol % 2 != 0)
        cout << ((s.length() - 1)/2) + 1 << '\n';
    
}