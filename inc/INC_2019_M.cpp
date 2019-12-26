#include<bits/stdc++.h>
#define fr first
#define sc second
#define ll long long
#define pb push_back
#define mp make_pair
#define chk cout<<"masuk"<<endl
#define deb(x) cout << #x << " = " << x <<'\n'
#define arpr(ar_,t_) cout<< #ar_ << ":\n";for(int i_=0;i_<t_;i_++)i_==t_-1? cout<<ar_[i_]<<'\n' : cout<<ar_[i_]<<" "
using namespace std;

ll modpow(ll b, ll p, ll mod){
	if (p == 0) 
        return 1; 
    ll P = modpow(b, p/2, mod) % mod; 
    P = (P * P) % mod; 
    return (p%2 == 0)? P : (b * P) % mod; 
}

int main(){
	ll n,m,i,j,a,ans=0,fact[100005],MOD=1000000007;
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	fact[0]=1;
	for(i=1;i<=100002;i++){
		fact[i]=fact[i-1]*i;
		fact[i]+=MOD;
		fact[i]%=MOD;
	}
	cin>>n>>m;
	for(i=0;i<=n/2;i++){
		ll var = fact[n-i];
		var%=MOD;
		ll bot = (fact[i]%MOD)*(fact[n-2*i]%MOD);
		bot%=MOD;
		var*=modpow(bot,MOD-2,MOD);
		var%=MOD;
		if(m>=(n-i-1)){
			ll top = fact[m-1];
			ll BOT = (fact[m-(n-i-1)]%MOD)*(fact[n-i-2]%MOD);
			BOT%=MOD;
			top*=modpow(BOT,MOD-2,MOD);
			top+=MOD;
			top%=MOD;
			top*=var;
			top+=MOD;
			top%=MOD;
			ans+=top;
			ans+=MOD;
			ans%=MOD;
//			deb(ans);
		}
		if(m>=(n-i)){
			ll top = fact[m-1];
			ll BOT = (fact[m-(n-i)]%MOD)*(fact[n-i-1]%MOD);
//			deb(top);
//			deb(BOT);
			BOT%=MOD;
			top*=modpow(BOT,MOD-2,MOD);
			top*=2;
			top+=MOD;
			top%=MOD;
			top*=var;
			top+=MOD;
			top%=MOD;
			ans+=top;
			ans+=MOD;
			ans%=MOD;
//			deb(ans);
		}
		if(m>=(n-i+1)){
			ll top = fact[m-1];
			ll BOT = (fact[m-(n-i+1)]%MOD)*(fact[n-i]%MOD);
//			deb(top);
//			deb(BOT);
			BOT%=MOD;
			top*=modpow(BOT,MOD-2,MOD);
			top+=MOD;
			top%=MOD;
			top*=var;
			top+=MOD;
			top%=MOD;
			ans+=top;
			ans+=MOD;
			ans%=MOD;
//			deb(ans);
		}
//		deb(ans);
	}
	ans+=MOD;
	ans%=MOD;
	cout<<ans<<endl;
}

