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

	int n, d; cin >> n >> d;
	vector<pair<int, int>>vp;
	for (int i = 0; i < n; i++)
	{
		int a, b; cin >> a >> b;
		vp.push_back(make_pair(a, b));


	}
	sort(vp.begin(), vp.end());
	int sum = 0;
	int maxsum = 0;
	int size = 0;
	int maxi = vp[n - 1].first;
	cout << maxi << endl;
	for (int i = 0; i < n - 1; i++)
	{
		if (abs(maxi - vp[i].first) < d)
		{
			maxsum += vp[i].second
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << vp[i].first << endl;
	}



	return 0;
}