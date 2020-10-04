#include <bits/stdc++.h>
//#include<boost/multiprecision/cpp_int.hpp>
#define mod 1000000007
#define ll long long int
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
#define FILE_READ_IN freopen("input.txt","r",stdin);
#define FILE_READ_OUT freopen("output.txt","w",stdout);
#define all(a) a.begin(),a.end()
#define br "\n"
//using namespace boost::multiprecision;
using namespace std;
ll power(ll x,ll y) {
	if (y == 0)
		return 1;
	ll p = power(x, y/2) % mod;
	p = (p * p) % mod;

	return (y%2 == 0)? p : (x * p) % mod;
}
ll LOGN(ll n , ll r) {
	return (n > r-1) ? (1 + LOGN(n / r , r)) : 0 ;
}
int  t , k ;
void solve(){
	int n ;
	cin >> n ;
	string ans = "" ;
	ll g1 = 0 , g2 = 0 ;
	ll sumT = (n * (n + 1)) / 2 ;
	ll a = sumT / 2 ;
	for(ll i = n ; i > 0; i--){
		if(a - i >= 0){
			g1 += (i) ;
			ans += '1' ;
			a -= i;
		}
		else{
			g2 += i ;
			ans += '0' ;
		}
	}
	cout << g1 << " " << g2 << "\n";
	cout << abs(g1 - g2) << "\n" ;
	reverse(ans.begin(),ans.end());
	cout << ans << "\n" ;
}
int main(){
	//fast ;
   cin >> t >> k;
   while(t--){
       solve();
   }
   return 0;
}

