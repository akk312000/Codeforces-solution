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


	int t;
	cin >> t;
	while (t--)
	{
		long long int d, k;
		cin >> d >> k;
		long long int ans = 0;
		for (int i = 0; i * i <= d; i++)
		{
			int res = d - i * i;
			int y = sqrt(res);
			if (y * y == res)
			{
				if (i == 0 || y == 0)
					ans += 2;
				else ans += 4;
			}
		}

		if (k >= ans)
		{
			cout << "possible" << endl;
		}
		else cout << "impossible" << endl;









	}

	return 0;
}