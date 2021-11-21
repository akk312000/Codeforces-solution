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
		long long int n, s;
		cin >> n >> s; long long int sumo = 0;
		int arr[n];
		vector<int> sum(n, 0);

		for (int i = 0; i < n; i++)
		{

			cin >> arr[i];
			sumo += arr[i];
			if (i == 0)sum[i] += arr[i];
			else
				sum[i] += (arr[i] + sum[i - 1]);

		}
		if (sumo <= s)
		{
			cout << 0 << endl; continue;
		}
		vector<int>::iterator it;
		it = upper_bound(sum.begin(), sum.end(), s);
		int kp = it - sum.begin();
		int index;
		long long int maxi = INT_MIN;
		for (int i = 0; i <= kp; i++)
		{
			if (arr[i] > maxi)
			{
				index = i;
				maxi = arr[i];
			}
		}
		cout << index + 1 << endl;










	}

	return 0;
}