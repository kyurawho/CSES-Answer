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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//int n;
	//cin >> n;

	int t;
	cin >> t;
	while(t--){
		ll x, y;
		cin >> y >> x;
		ll ans, add = 0;
		if(y > x){
			ans = (y - 1) * (y - 1);
			
			if(y % 2 != 0){
				add = x;
			}else{
				add = y * 2 - x;
			}
		}else{
			ans = (x - 1) * (x - 1);
			
			if(x % 2 == 0){
				add = y;
			}else{
				add = x * 2 - y;
			}
		}
		
		cout << ans + add << endl;
	}
}
