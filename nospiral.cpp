#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
signed main()
{

#ifndef ONLINE_JUDGE

	freopen("input.txt", "r", stdin);

	freopen("output.txt", "w", stdout);
#endif
	fast_io

	ull t;
	cin >> t;
	while (t--)
	{
		ull x, y;
		cin >> x >> y;
		ull ans;
		if (x >= y)
		{
			if ((x & 1) == 0)
			{
				ans = (x * x) - y + 1;

			}
			else
			{

				ans = (x - 1) * (x - 1) + y;
			}
		}
		else
		{
			if (y & 1)
			{
				ans = (y * y) - x + 1;
			}
			else
			{
				ans = (y - 1) * (y - 1) + x;
			}
		}
		cout << ans << endl;







	}

	return 0;
}