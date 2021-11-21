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
	long long int a[1000000];
	long long int max = 1000000;
	for (long long int i = 0; i <= 1000000; i++)
	{
		a[i] = i * i;
	}
	int t;
	cin >> t;
	while (t--)
	{
		long long int n, x;
		cin >> n;
		int i = 0;
		int j = sqrt(n);
		while (i <= j)
		{
			x = a[i] + a[j];
			if (x == n)break;
			if (x < n)i++;
			else j--;
		}
		if (i <= j)cout << "Yes" << endl;
		else cout << "No" << endl;









	}

	return 0;
}