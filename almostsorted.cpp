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

	int n; cin >> n;
	vector<int>arr(n);
	for (int i = 0; i < n; i++)cin >> arr[i];
	vector<int>brr(n);
	brr = arr;
	sort(brr.begin(), brr.end());
	vector<int>diff;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] != brr[i])
		{
			diff.push_back(i);
		}
	}
	if (diff.size() == 0)
	{
		cout << "yes" << endl;
		return 0;
	}
	if (diff.size() == 2 && arr[diff[0]] == brr[diff[1]] && arr[diff[1]] == brr[diff[0]])
	{
		cout << "yes\nswap " << diff[0] + 1 << " " << diff[1] + 1 << endl;
	}
	else
	{
		reverse(arr.begin() + diff[0], arr.begin() + diff.back() + 1 );


		bool flag = true;
		for (int i = 0; i < n; i++)
		{
			flag &= (arr[i] == brr[i]);

		}

		if (flag)cout << "yes\nreverse " << diff[0] + 1 << " " << diff.back() + 1 << endl;
		else cout << "no" << endl;
	}



	return 0;
}