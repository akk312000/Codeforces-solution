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

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		float arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		sort(arr, arr + n, greater<int>());
		float ans = 0;

		float diff[n];
		for (int i = 0; i < n; i++)
		{
			diff[i] = 0;
		}
		float avg = 0;
		int ip;
		for ( ip = 0; ip < n - 1; ip++)
		{
			avg += ((arr[ip] + arr[ip + 1]) / 2.0);
			ip++;

		}
		if (ip < n)
		{
			avg += arr[ip];

		}
		int anso;
		anso = (int)avg;
		cout << anso << endl;








	}

	return 0;
}