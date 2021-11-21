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


	int n; cin >> n;
	int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];
	bool state = false;
	for (int i = 0; i < 1 << n; i++)
	{
		int ans = 0;
		for (int j = 0; j < n; j++)
		{
			if (i & (1 << j))ans += arr[j];
			else ans -= arr[j];
		}
		if (ans % 360 == 0)

		{
			state = true; break;
		}
	}
	if (state)cout << "YES" << endl;
	else cout << "NO" << endl;




	return 0;
}