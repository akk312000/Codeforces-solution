#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
ll modi;



pair<ll, ll> mul(pair<ll, ll>p1, pair<ll, ll>p2)
{
	ll ans = mmod(p1.first * p2.first - p1.second * p2.second);
	ll ansi = mmod(p1.second * p2.first + p1.first * p2.second);
	return make_pair(ans, ansi);

}
pair<ll, ll>binexp(pair<ll, ll>inp, ll kk)
{
	pair<ll, ll> ans = make_pair(1, 0);
	while (kk > 0)
	{
		if (kk & 1)
		{
			ans = mul(ans, inp);
		}
		inp = mul(inp, inp);
		kk /= 2;
	}
	return ans;
}

signed main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	fast_io

	int t;
	cin >> t;
	while (t--)
	{
		ll a, b, k;
		cin >> a >> b >> k >> modi;
		pair<ll, ll>p;
		p = make_pair(a, b);
		pair<ll, ll>answer = binexp(p, k);
		cout << (answer.first + modi) % modi << " " << (answer.second + modi) % modi << endl;








	}

	return 0;
}