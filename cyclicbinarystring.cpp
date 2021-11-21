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

	string s;
	cin >> s;
	long long int maxcount = 0;
	long long int count = 0;
	bool isone = false;
	for (long long int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1') { isone = true; count = 0;}
		else
		{
			count++;
			maxcount = max(maxcount, count);
		}

	}
	if (!isone || maxcount > 32)cout << -1 << endl;
	else
		cout << maxcount << endl;




	return 0;
}