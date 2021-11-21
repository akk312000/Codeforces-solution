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

	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size();
	int anspos = 0;
	for (int i = 0; i < n; i++)anspos += (s1[i] == '+' ? 1 : -1);
	int finalpos = 0;
	int moves = 0;
	for (int i = 0; i < n; i++)
	{
		if (s2[i] == '?')moves++;
		else finalpos += (s2[i] == '+' ? 1 : -1);

	}
	int dis = anspos - finalpos;
	double answer;
	if ((dis + moves) % 2 != 0 || moves < abs(dis))
		answer = 0;
	else
	{
		int m = (moves + abs(dis)) / 2;
		int c = 1;
		for (int i = 0; i < m; i++)
		{
			c *= moves - i;
		}
		for (int i = 2; i <= m; i++)c /= i;
		answer = (double)c / (1 << moves);
	}
	printf("%.12f\n", answer);

	return 0;
}