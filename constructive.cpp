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
		int n;
		cin >> n; int arr[n];
		int ans;
		int mini = INT_MAX;
		for (int i = 0; i < n; i++)cin >> arr[i];
		for (int i = 0; i < n; i++)
		{
			int kp = arr[i];
			mini = min(mini, kp);

		}
		long long anso = ceil(n / (mini * 1.0));
		cout << anso << endl;








	}

	return 0;
}
