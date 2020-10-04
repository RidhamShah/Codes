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

void solve(){
    int n; cin>>n;
    int mat[n][n];

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>mat[i][j];
        }
    }

    bool f = 0;
    int cnt = 0;
    for(int i=n-1; i>=0; --i){
        if(f){
            int x = (i)*n + 1;
            if(mat[0][i]!=x) cnt++, f=!f;
        }
        else{
            int x = (i)*n + 1;
            if(mat[i][0]!=x) cnt++, f=!f;
        }
    }

    cout<<cnt<<br;
}

int main(){
    FIO;
    start{
        solve();
    }
    return 0;
}
