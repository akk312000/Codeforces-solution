#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
void multiply(long long int f[2][2], long long int m[2][2])
{
	long long int x = (f[0][0] * m[0][0] + f[0][1] * m[1][0]) % MOD;
	long long int y = (f[0][0] * m[0][1] + f[0][1] * m[1][1]) % MOD;
	long long int z = (f[1][0] * m[0][0] + f[1][1] * m[1][0]) % MOD;
	long long int w = (f[1][0] * m[0][1] + f[1][1] * m[1][1]) % MOD;
	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = z;
	f[1][1] = w;

}
void power(long long int f[2][2], long long int n)
{
	if (n == 0 || n == 1)return;
	long long int m[2][2] = {{1, 1}, {1, 0}};
	power(f, n / 2);
	multiply(f, f);
	if (n % 2 != 0)multiply(f, m);
}
long long int fib(long long int n)
{
	long long int f[2][2] = {{1, 1}, {1, 0}};
	if (n == 0)return 0;
	power(f, n - 1);
	return f[0][0];
}
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
		long long int result, n, m; cin >> n >> m;
		result = (fib(m + 2) - fib(n + 1)) % MOD;
		if (result < 0)result += MOD;
		cout << result << endl;








	}

	return 0;
}