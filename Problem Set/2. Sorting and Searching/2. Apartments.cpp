#include<bits/stdc++.h>
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
	int n, m, k;
	cin >> n >> m >> k;
	int a[n], b[m];
	For(i, n) cin >> a[i];
	For(i, m) cin >> b[i];
	sort(a, a + n);
	sort(b, b + m);
	
	int i = 0, j = 0, ans = 0;
	while(i < n && j < m){
		if(b[j] <= a[i] + k && b[j] >= a[i] - k){
			j++;
			i++;
			ans++;
		}else if(b[j] < a[i] - k){
			j++;
		}else if(b[j] > a[i] + k){
			i++;
		}
	}
	cout << ans << endl;
}
