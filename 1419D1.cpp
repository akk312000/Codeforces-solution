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

	ull n;
	cin >> n;
	double np = n;
	ull arr[n];
	for (ull i = 0; i < n; i++)cin >> arr[i];
	sort(arr, arr + n);
	if (n <= 2)
	{	cout << 0 << endl;
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		return 0;
	}


	cout << (n - 1) / 2 << endl;
	ull t = 0;
	for (ull i = 0, j = n / 2 ; ;)
	{
		if (t % 2 == 0)
		{
			cout << arr[j] << " "; t++; j++;
		}
		else
		{
			cout << arr[i] << " "; t++; i++;
		}
		if (t == n)break;

	}

	return 0;
}