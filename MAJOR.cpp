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
		int n; cin >> n;
		map<int, int> mp;
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i]; mp[arr[i]]++;
		}

		int maxi = 0;
		int element = -1;
		for (auto it : mp)
		{
			if (it.second > maxi)
			{
				maxi = it.second;
				element = it.first;
			}


		}
		if (maxi > n / 2)cout << "YES" << " " << element << endl;
		else cout << "NO" << endl;








	}

	return 0;
}