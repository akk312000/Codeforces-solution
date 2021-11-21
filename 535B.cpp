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

	string s; cin >> s;
	int n = s.size();
	int ans = 0;
	int kp = n - 1;
	for (int i = 0; i < n; i++)
	{
		int xp;
		if (s[i] == '4')xp = 1;
		else if (s[i] == '7')xp = 2;

		ans += ((1 << kp) * (xp));
		kp--;

	}
	cout << ans << endl;



	return 0;
}