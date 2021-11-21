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


	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		int arr[n];
		for (int i = 0; i < n; i++)cin >> arr[i];
		sort(arr, arr + n, greater<int>());
		if (n == 1)
		{
			cout << arr[0] << endl;
			continue;

		}
		else if (n == 2)
		{
			cout << max(arr[0], arr[1]) << endl;
			continue;

		}
		else if (n == 3)
		{
			int ans = arr[0];
			int diff = arr[0] - arr[2];
			arr[1] -= diff;
			ans += arr[1];
			cout << ans << endl;
			continue;


		}
		else if (n == 4)
		{
			int ans = arr[0];
			int diff = arr[0] - arr[1];
			arr[2] -= diff;

			cout << ans + max(arr[2], arr[3]) << endl;
			continue;

		}







	}

	return 0;
}