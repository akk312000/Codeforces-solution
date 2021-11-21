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

	int arr[8];
	bool state[8];
	memset(state, true, sizeof(state));
	for (int i = 0; i < 8; i++)cin >> arr[i];
	int p; cin >> p;
	while (p--)
	{
		int x, y;
		cin >> x >> y;
		x--; y--;
		if (arr[x] > arr[y])
		{

			state[y] = false;

		}
		else if (arr[x] < arr[y])
		{
			state[x] = false;

		}
	}

	long long int sum = 0;
	for (int i = 0; i < 8; i++)
	{
		if (state[i] == true)
		{
			sum += arr[i];
		}
	}
	cout << sum << endl;

	return 0;
}