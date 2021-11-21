#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
long long int expo(long long a, long long b)
{
	if (b == 0)
	{
		return 1;
	}
	if (b == 1)
	{
		return a % MOD;
	}
	long long int res = expo(a, b / 2);

	long long int ans;
	ans = (res * res) % MOD;
	if (b & 1)
	{
		ans = (ans * a) % MOD;
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
		string a, b;
		cin >> a >> b;

		long long int ans = 0;

		for (long long int i = 0; i < a.size(); i++)
		{
			ans = (ans * 10 + (int)a[i] - '0') % MOD;
		}
		long long int bns = 0;

		for (long long int i = 0; i < b.size(); i++)
		{
			bns = (bns * 10 + (int)b[i] - '0') % (MOD - 1);

		}
		cout << expo(ans, bns) << endl;







	}

	return 0;
}