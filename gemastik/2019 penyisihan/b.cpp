
#include <bits/stdc++.h> 
using namespace std; 
bool isPossible(int a[], int n) 
{ 
    int sum = 0, maxS = 0; 
    for (int i = 0; i < n; i++) { 
        sum += a[i]; 
        maxS = max(a[i], maxS); 
    } 
  if ((sum - maxS) >= maxS) 
        return true; 
  
    return false; 
} 
  
int main() 
{ 
    string st;
    int bil[1000];
    getline(cin,st);
    int x =0;
    
    while( 1 > 0){
        int s;
        if(cin.get() == '\n')
            break;
        cin >> s; 
        bil[x] = s;
        x++;
    }
      
    if (isPossible(bil, x)) 
        cout << "MUNGKIN\n"; 
    else
        cout << "MUSTAHIL\n"; 
  
    return 0; 
} 