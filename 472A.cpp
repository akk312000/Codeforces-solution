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

	bool primes[1000001];
	memset(primes, true, sizeof(primes));
	primes[0] = primes[1] = true;
	for (int i = 2; i * i <= 1000001; i++ )
	{
		if (primes[i])
		{
			for (int j = i * i; j <= 1000001; j += i)
			{
				primes[j] = false;
			}
		}
	}
	int n; cin >> n;

	for (int i = 1; i <= n / 2; i++)
	{
		int j = n - i;
		if (primes[i] == false && primes[j] == false)
		{
			cout << i << " " << j << endl;
			break;
		}
	}
	return 0;
}