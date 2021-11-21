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
	for (int i = 1; i < n; i++)
		cin >> arr[i];
	sort(arr + 1, arr + n);
	int ans = n;
	for (int i = 1; i < n; i++)
	{
		if (arr[i] != i)
		{
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}
