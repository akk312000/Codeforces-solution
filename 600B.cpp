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
	int n, m;
	cin >> n >> m;
	int arr[n], brr[m];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

	}
	for (int i = 0; i < m; i++)cin >> brr[i];
	sort(arr, arr + n);
	for (int i = 0; i < m; i++)
	{
		int lb = upper_bound( arr, arr + n, brr[i]) - arr;
		cout << lb << endl;

	}
//int upper1 = upper_bound(arr, arr+5, 35) - arr;




	return 0;
}