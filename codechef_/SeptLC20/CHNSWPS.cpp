#include <bits/stdc++.h>
using namespace std;

//#include<boost/multiprecision/cpp_int.hpp>
//using namespace boost::multiprecision;

#define ll long long int
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mod 1000000007
#define FOR1(i, m, n) for(i=m; i<n; i++)
#define FOR2(i, n, m) for(i=n-1; i>=m; i--)
#define re(v) ll v; cin>>v
#define mod 1000000007
#define mod2 998244353
#define mp make_pair
#define pb push_back
#define fill(a) memset(a, 0, sizeof(a))
#define start ll t; cin>>t; while(t--)
#define start1 ll t = 1; while(t--)
#define F first
#define S second
#define br "\n"
ll phi(ll n) {
	ll result = n;
	for (ll p = 2; p * p <= n; ++p) {
		if (n % p == 0) {
			while (n % p == 0)
				n /= p;
			result -= result / p;
		}
	}
	if (n > 1)
		result -= result / n;
	return result;
}
bool isPrime(ll a) {
	if(a==1)return false;
	if(a==2 || a==3)return true;
	if(a%2==0 ||a%3==0)return false;
	for(ll i=5; i<=sqrt(a); i+=6)
		if(a%i==0 || a%(i+2)==0)
			return false;
	return true;
}
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
double finds(double x) {
	return (sqrtl(8*x + 1) / 2) - 0.5 ;
}
void solve() {
	int n;
	cin>>n;
	ll sum = (n*(n+1))/2 , A = 0 , B = 0;
	if(sum&1) {
		cout<<"0\n";
		return;
	} else {
		double tr = sum / 2 ;
		double now = finds(tr) , x , y;
		x = modf(now , &y) ;
		ll ans = (ll) now ;
		B = finds(ans) ;
		if(x == 0) {
			ll give = n - ans - 1 ;
			A = (ans * (ans - 1)) / 2 + ((give + 1) * give) / 2 ;
			B -= A ;
		}
		if(B){
			B += ans + A ;
		}
		A += n - ans ;
	}
	cout << A << "\n" ;
}

int main() {
	FIO;
	start {
		solve();
	}
	return 0;
}

