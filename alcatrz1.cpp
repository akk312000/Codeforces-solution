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
	int tp; cin >> tp;
	while (tp--)
	{	string t;
		cin >> t;
		ull sum = 0;
		ull sizo = t.size();
		for (ull i = 0; i < sizo; i++)
		{
			char ch = t[i];
			int kp = (int)ch - '0';
			sum += kp;

		}
		cout << sum << endl;
	}

	return 0;
}