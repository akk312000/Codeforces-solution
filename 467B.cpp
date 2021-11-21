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

	int n, m, k; cin >> n >> m >> k;
	int arr[m + 1];
	for (int i = 0; i < m + 1; i++)
		cin >> arr[i];
	int kp = arr[m];
	int count = 0;
	for (int i = 0; i < m; i++)
	{
		int counter = 0;
		for (int j = 0; j < 32; j++)
		{
			if (((arr[i] >> j) & 1) != ((kp >> j) & 1))
			{
				counter++;
			}
		}
		if (counter <= k)
		{
			count++;
		}

	}
	cout << count << endl;

	return 0;
}