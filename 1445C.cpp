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
		long long int p, q;
		cin >> p >> q;
		if (__gcd(p, q) == 1 && p < q)
		{
			cout << p  << endl;
			continue;
		}
		int ip = 1;
		for (int i = p / ip;; i = (p / ip) )
		{

			if (i % q != 0 && p % i == 0)
			{
				cout << i << endl;
				break;
			}
			ip++;



		}








	}

	return 0;
}