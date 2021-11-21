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

	int max = 3000;
	int primes[max] = {0};
	vector<int>res;
	for (int i = 2; i < max; i++)
	{
		if (primes[i] == 0)
		{
			primes[i] = 1;
			for (int j = 2 * i; j < max; j += i)
			{
				primes[j] -= 1;
				if ((primes[j] + 3) == 0)res.push_back(j);
			}
		}
	}
	sort(res.begin(), res.end());
	int t;
	cin >> t;
	while (t--)
	{
		int n; cin >> n;
		cout << res[n - 1] << endl;








	}

	return 0;
}