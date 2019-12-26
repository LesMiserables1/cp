#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n,bun,beef,chick,h,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        bool max = false;
        bool check = false;
        cin >> bun >> beef >> chick;
        cin >> h >> c;
        if (h > c)
            max = true;
        else
            max = false;
        int nbun = bun/2;
        int profit = 0;
        while (nbun > 0)
        {   
            if(max){
                if(beef > 0){
                    profit += h;
                    beef--;
                }else if(chick > 0){
                    profit += c;
                    chick--;
                }
            }else{
                 if(chick > 0){
                    profit += c;
                    chick--;
                }else if(beef > 0){
                    profit += h;
                    beef--;
                }
            }
            nbun--;
            check = true;
        }
        if(!check)
            cout << 0 << '\n';
        else
            cout << profit << '\n';
        
    }
    
}