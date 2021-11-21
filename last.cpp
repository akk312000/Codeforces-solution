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
		int arr[n];
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];

		}
		int premul[n];
		long long int prod = 1;
		for (int i = 0; i < n; i++)
		{
			int kp = arr[i];
			prod = (prod * kp);
			premul[i] = prod;

		}
		int suff[n];
		prod = 1;
		for (int i = n - 1; i >= 0; i--)
		{
			int kp = arr[i];
			prod = (prod * kp);
			premul[i] = prod;

		}

		for (int i = 0; i < n; i++)
		{
			cout << suff[i] << " ";
		}
		cout << endl;
		for (int i = 0; i < n; i++)
		{
			cout << premul[i] << " ";
		}
		cout << endl;







	}

	return 0;
}