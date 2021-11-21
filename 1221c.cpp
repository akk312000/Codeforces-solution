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
		int n, s, k;
		cin >> n >> s >> k;
		set<int>m;
		for (int i = 0; i < k; i++)
		{
			int x; cin >> x;
			m.insert(x);
		}
		for (int i = 0;; i++)
		{
			if (s - i >= 1 && (m.find(s - i) == m.end()))
			{
				cout << i << endl;
				break;
			}
			if (s + i <= n && (m.find(s + i) == m.end()))
			{
				cout << i << endl;
				break;
			}
		}





	}

	return 0;
}