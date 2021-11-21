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

	long long int n, q;
	cin >> n >> q;
	long long int arr[n];
	for (long long int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}

	for (int i = 1; i < n; i++)
	{
		arr[i] = abs(arr[i] - arr[i - 1]);
	}
	long long gco = 0;
	while (q--)
	{
		long long int k; cin >> k;
		cout << __gcd(arr[0] + k, gco) << endl;


	}

	return 0;
}