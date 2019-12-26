#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count = 0;
    string st;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> st;
        if(st == "BOHONG")
            count++;
    }
    if(count%2 == 0)
        cout << "JUJUR\n";
    else
        cout << "BOHONG\n";
    
}