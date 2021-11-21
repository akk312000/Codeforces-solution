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

	long long int n, m;
	cin >> n >> m;
	long long int arr[n], brr[m];
	long long int sum[n];
	long long int lb;
	for (long long int i = 0; i < n; i++)
	{	cin >> arr[i];
		if (i == 0)sum[0] = arr[0];
		else sum[i] = sum[i - 1] + arr[i];
	}

	long long int room;
	for (long long int i = 0; i < m; i++)
	{	cin >> brr[i];
		lb = lower_bound(sum, sum + n, brr[i]) - sum;


		if (lb == 0)room = brr[i];
		else
			room = brr[i] - sum[lb - 1];
		cout << lb + 1 << " " << room << endl;
	}


	return 0;
}