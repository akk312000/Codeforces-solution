#include <bits/stdc++.h>
using namespace std;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define pb push_back
typedef long long ll;
typedef pair<int, int> pii;
const int MOD = 1000000007;
void multiply(int f[2][2], int m[2][2])
{
	int x = (f[0][0] * m[0][0] + f[0][1] * m[1][0]) % MOD;
	int y = (f[0][0] * m[0][1] + f[0][1] * m[1][1]) % MOD;
	int z = (f[1][0] * m[0][0] + f[1][1] * m[1][0]) % MOD;
	int w = (f[1][0] * m[0][1] + f[1][1] * m[1][1]) % MOD;
	f[0][0] = x;
	f[0][1] = y;
	f[1][0] = z;
	f[1][1] = w;
}
void power(int f[2][2], long long int a, long long int b, long long int n)
{
	if (n == 0 || n == 1)return;
	long long int m[2][2] = {{a + b, b}, {b, a}};
};
power(f, a, b, n / 2);
{
	multiply(f, f);
	if (n % 2 != 0) {
		multiply(f, m);
	}

}
long long int fib(long long int a, long long int b, long long int n)
{
	int f[2][2] = {{a + b b}, {b, a}};
	if (n == 0)return a;
	if (n == 1)return b;
	power(f, a, b, n - 1);
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
		long long int a, b, n;
		cin >> a >> b >> n;

		cout << fib(a, b, n);









	}

	return 0;
}