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

	long long int t;
	cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		long long int arr[n];
		for (long long int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		long long int ans = 0;
		sort(arr, arr + n, greater<int>());
		long long int diff = 0;
		long long int i;
		for ( i = 0; i < n - ( (n & 1) ? 1 : 0); i++)
		{
			arr[i] = arr[i] - diff;

			ans += (arr[i]);

			diff = arr[i] - arr[i + 1];

			i++;

		}
		if (n & 1)
		{
			ans += arr[i];
			ans -= diff;

		}
		cout << ans << endl;







	}

	return 0;
}