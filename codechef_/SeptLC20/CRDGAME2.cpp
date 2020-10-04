#include <bits/stdc++.h>
#define mod 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
#define ll long long int
#define F first
#define S second
#define fast ios_base::sync_with_stdio(false);cin.tie();cout.tie();
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
ll modInverse(ll a, ll m) {
	ll m0 = m;
	ll y = 0, x = 1;
	if (m == 1)
		return 0;
	while (a > 1) {
		ll q = a / m;
		ll t = m;
		m = a % m, a = t;
		t = y;
		y = x - q * y;
		x = t;
	}
	if (x < 0)
		x += m0;
	return x % m0;
}
ll nCr(ll n,ll k) {
	ll C[k+1];
	for(int i=0; i<k+1; i++)C[i]=0;
	C[0] = 1;

	for (ll i = 1; i <= n; i++) {
		for (ll j = min(i, k); j > 0; j--)
			C[j] = (C[j] + C[j-1])%mod;
	}
	return C[k] % mod;
}
const int mxn = 1e5 + 5 ;
ll twp[mxn] = {0} , fac[mxn] = {0} ;
void _prep() {
	twp[0] = fac[0] = 1 ;
	for(int i = 1 ; i < mxn ; i ++) {
		twp[i] = (2 * twp[i-1]) % mod ;
		fac[i] = (i * fac[i-1]) % mod ;
	}
}
void solve() {
	int n ;
	cin >> n ;
	ll a[n] ;
	map<ll,ll> m;
	for(int i = 0 ; i < n ; i ++) {
		cin >> a[i] ;
		m[a[i]] ++;
	}
	ll mx = *max_element(a,a+n) ;
	int mf = m[mx] ;
	if(mf % 2 == 0) {
		int left = n - m[mx] ;
		ll mI = modInverse(fac[mf / 2], mod) % mod ;
		ll deno = (fac[mf] * ((mI * mI) % mod)) % mod;
		cout << ((twp[n] % mod) - (twp[left] * deno) % mod + mod) % mod << "\n" ;
	} else {
		cout << twp[n] % mod << "\n" ;
	}
}
int main() {
	fast ;
	_prep();
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

