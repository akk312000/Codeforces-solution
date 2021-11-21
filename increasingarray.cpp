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

	long long int n; cin >> n;
	long long int arr[n];
	for (int i = 0; i < n; i++)cin >> arr[i];

	long long int count = 0;
	for (long long int i = 0; i < n - 1; i++)
	{
		if (arr[i + 1] < arr[i])
		{
			long long int diff = (arr[i] - arr[i + 1]);
			count += diff;
			arr[i + 1] += diff;
		}

	}
	cout << count << endl;
	return 0;
}