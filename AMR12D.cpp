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
		string s;
		cin >> s;
		int sizo = s.size();
		bool state = true;
		for (int i = 0, j = sizo - 1; i < sizo / 2, j >= sizo / 2; i++, j--)
		{
			if (s[i] != s[j])state = false;

		}
		if (state == true)cout << "YES" << endl;
		else cout << "NO" << endl;








	}

	return 0;
}