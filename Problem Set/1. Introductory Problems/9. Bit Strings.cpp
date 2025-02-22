#include<bits/stdc++.h>
//#include<stdio.h>
//#include<math.h>
using namespace std;
typedef long long ll;

#define fi first
#define se second
#define pb push_back
#define pq priority_queue
#define mp make_pair
#define all(x) x.begin(), x.end()
#define Repp(i, l, r, a) for (int i = l; i < r; i += a)
#define Rep(i, l, r) Repp(i, l, r, 1)
#define For(i, n) Rep(i, 0, n)
#define Fori(i, n) Rep(i, 1, n + 1)
#define Each(x, v) for (auto x : v)
#define Repd(i, l, r) for (int i = r - 1; i >= l; i--)
#define Ford(i, n) Repd(i, 0, n)
#define endl "\n"

typedef pair <int, int> pii;
typedef pair <int, pii> piii;

ll MOD = 1e9 + 7;

// Binary Exponentiation
ll solve(ll x){
	ll res = 1;
	ll a = 2;
	while(x > 0){
//		cout << x << ' ';
//		if(x&1) cout << "true" << ' ';
//		else cout << "false" << ' ';
		
		if(x&1) res = (res * a) % MOD; //cek bitwisenya diakhiri 1 atau 0
		a = (a * a) % MOD;
		x >>= 1; // 010 --> 001, sebenernya kyk x/2
//		cout << x << endl;
	}
	return res;
}

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	cout << solve(n) << endl;
}
