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

	long int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		string ans;
		for (int i = 0; i < n; i++)
		{
			int x; cin >> x;
			ans.push_back(x + '0');

		}

		bool x = next_permutation(ans.begin(), ans.end());
		if (x)
			cout << ans << endl;
		else cout << -1 << endl;








	}

	return 0;
}