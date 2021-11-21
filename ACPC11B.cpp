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
		vector<int>arr1;
		vector<int>arr2;
		vector<int>res;
		int x;
		while (cin >> x)
		{
			res.push_back(x);
		}
		int sizo = res.size();
		for (int i = 0; i < sizo / 2; i++)
		{
			arr1.push_back(res[i]);
		}
		for (int i = sizo / 2; i < sizo; i++)
		{
			arr2.push_back(res[i]);

		}
		sort(arr1.begin(), arr1.end());
		sort(arr2.begin(), arr2.end());
		for (auto it : arr1)
		{
			cout << it << " ";
		}
		cout << endl;
		for (auto it : arr2)
		{
			cout << it << " ";
		}
		cout << endl;










	}

	return 0;
}