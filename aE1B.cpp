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

	int n, k, s;
	cin >> n >> k >> s; int arr[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	if (n == 1)
	{
		if (arr[0] < k * s)cout << 0 << endl;
		else cout << 1 << endl;
		return 0;
	}
	sort(arr, arr + n, greater<int>());

	int sumo = 0;
	int c = 0;
	for (int i = 0; i < n; i++)
	{
		sumo += arr[i];
		c++;
		if (sumo >= k * s)break;
	}
	cout << c << endl;


	return 0;
}