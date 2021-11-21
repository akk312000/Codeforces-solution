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
		int n; cin >> n;
		vector<int>a;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			a.push_back(x);
		}
		sort(a.begin(), a.end());
		int i;
		for ( i = 1; i <= 1024; i++)
		{
			vector<int>b;
			for (int j = 0; j < n; j++)
			{
				b.push_back(a[j]^i);
			}
			sort(b.begin(), b.end());
			if (a == b)
			{
				cout << i << endl;
				break;
			}

		}
		if (i == 1025)
		{
			cout << -1 << endl;
		}








	}

	return 0;
}