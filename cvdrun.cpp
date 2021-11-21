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
		int n, k, x, y;
		cin >> n >> k >> x >> y;
		set<int>s;
		s.insert(x);
		bool found = false;

		int pos = x;
		while (1)
		{
			pos = (pos + k) % n;

			if (pos == y)
			{
				found = true;

				break;
			}
			if (s.count(pos) == 1)
			{
				break;
			}
			else
				s.insert(pos);


		}
		if (found)
		{
			cout << "YES" << endl;
		}
		else cout << "NO" << endl;








	}

	return 0;
}