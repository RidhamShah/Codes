#include <bits/stdc++.h>
//For ordered_set
/*
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
*/
//#include<boost/multiprecision/cpp_int.hpp>
#define mod 1000000007
#define init(arr,val) memset(arr,val,sizeof(arr))
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
int query(int x) {
	cout << "1 " << x << "\n";
	int xs;
	cin >> xs;
	return xs;
}
void solve() {
	int n ;
	cin >> n ;
	int topQ = query(1<<20) ;
	int tsum = topQ - n*(1<<20);
	int xr_ans = (topQ & 1) ;
	for(int i = 1 ; i < 20 ; i ++) {
		int A = query(1 << i) ;
		int bit = (A - n*(1<<i) - tsum) ;
		bit /= (1<<(i+1)) ;
		xr_ans |= (bit & 1) * (1 << i) ;
	}
	cout << "2 " << xr_ans << "\n" ;
	int ver ;
	cin >> ver ;
	if(ver == -1){
		return ;
	}
}
int main() {
	fast ;
	int t = 1;
	cin >> t;
	while(t--) {
		solve();
	}
	return 0;
}

