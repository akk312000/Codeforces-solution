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
		long long int n, k; cin >> n >> k;
		long long int arr[n];
		long long int sumo = 0;
		for (long long int i = 0; i < n; i++)
		{cin >> arr[i]; sumo += arr[i];}

		long long int day = 0;
		long long int prev = 0;
		long long int ip = 0; int sum = 0;
		bool found = false;
		if (sumo <= 3000000)
		{	for (long long int i = 0; i < n; i++)
			{

				sum = arr[i] + prev;
				if (sum < k)
				{
					found = true;

					break;
				}
				prev = sum - k;
				ip++;

			}
		}

		if (found)
		{
			cout << ip + 1 << endl;
			continue;
		}
		cout << (sumo / k) + 1 << endl;









	}

	return 0;
}