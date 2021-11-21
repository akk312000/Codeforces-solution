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
		int n, tp; cin >> n >> tp;
		int arr[n];
		int xp = 0;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			int r;
			if (tp % 2 == 0 && tp / 2 == x)
			{
				r = (xp++) % 2;

			}
			else if (2 * x < tp)
			{
				r = 1;
			}
			else r = 0;

			cout << r << " ";


		}
		cout << endl;








	}

	return 0;
}