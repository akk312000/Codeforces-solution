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
		bool diff = false;
		int arr[n]; int sum = 0;
		for (int i = 0; i < n; i++)
		{cin >> arr[i]; sum += arr[i];}
		for (int i = 0; i < n - 1; i++)
		{
			if (arr[i] != arr[i + 1])
			{
				diff = true; break;
			}
		}
		if (diff == false)
		{
			cout << sum / 2 << endl;
		}









	}

	return 0;
}