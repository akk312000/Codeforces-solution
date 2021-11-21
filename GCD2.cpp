#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
int gcd(int a, int b)
{
	if (b == 0)return a;
	else
		return gcd(b, a % b);
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
		int a; cin >> a;
		string b; cin >> b;
		if (a == 0)
		{
			cout << b << endl;
			continue;
		}
		int res = 0;
		for (int i = 0; i < b.size(); i++)
		{
			res = (res * 10 + (int)b[i] - '0') % a;


		}
		cout << gcd(a, res) << endl;









	}

	return 0;
}