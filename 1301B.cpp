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
		int arr[n]; for (int i = 0; i < n; i++)cin >> arr[i];
		int mini = INT_MAX, maxi = INT_MIN;
		for (int i = 0; i < n; i++)
		{
			if (i > 0 && arr[i] == -1 && arr[i - 1] != -1)
			{
				mini = min(mini, arr[i - 1]); maxi = max(maxi, arr[i - 1]);
			}
			if (i + 1 < n && arr[i] == -1 && arr[i + 1] != -1)
			{
				maxi = max(maxi, arr[i + 1]);
				mini = min(mini, arr[i + 1]);
			}
		}
		int ref = (maxi + mini) / 2;
		int diff = INT_MIN;
		if (arr[0] == -1)arr[0] = ref;
		for (int i = 1; i < n; i++)
		{
			if (arr[i] == -1)
			{
				arr[i] = ref;
			}
			diff = max(diff, abs(arr[i] - arr[i - 1]));

		}
		cout << diff << " " << ref << endl;









	}

	return 0;
}