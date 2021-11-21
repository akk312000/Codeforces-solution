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

	int sign = arr[0];
	int count[100001];
	memset(count, 0, sizeof(count));
	int tp = 0;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == sign)
		{
			count[tp]++;

		}
		else
		{
			tp++;
			sign = arr[i];
			count[tp]++;
		}
	}
	int difo = 0;
	for (int i = 1; i <= tp; i++)
	{
		difo = max(difo, min(count[i], count[i - 1]));


	}
	cout << 2 * difo << endl;


	return 0;
}