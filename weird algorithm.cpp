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


	long long int n; cin >> n;
	cout << n << " ";
	while (n != 1)
	{
		if (n & 1)
		{
			n = (n * 3 + 1);
			cout << n << " ";
		}
		else

		{
			n /= 2;
			cout << n << " ";
		}
	}


	return 0;
}