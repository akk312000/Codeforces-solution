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
	vector<int>vp;
	vector<int>ar = {2, 3, 1, 5, 4, 6, 7, 9, 8};

	for (auto it : ar)
	{
		vp.push_back(it);
	}
	for (long long int i = 10; i <= 100000; i++)
	{
		vp.push_back(i);
	}

	for (long long int i = 10; i <= 100000; i++)
	{
		if (__builtin_popcount(i) == 1)
		{
			swap(vp[i - 1], vp[i ]) ;

		}
	}

	long long int t; cin >> t;
	while (t--)
	{
		long long int n; cin >> n;
		if (__builtin_popcount(n) == 1 || n == 1)
		{
			cout << -1 << endl;
			continue;
		}
		else
		{
			long long int ans = 1;
			bool state = true;
			for (long long int i = 0; i < n; i++)
			{


				cout << vp[i] << " ";
			} cout << endl;


		}

	}



	return 0;
}