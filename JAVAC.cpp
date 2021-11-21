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
	while (cin >> s)
	{
		if (isupper(s[0]))
		{
			cout << "Error!" << endl;
			continue;
		}
		bool error = false;
		int sizo = s.size();

		string str = "_";
		if (s[0] == str[0] || s[sizo - 1] == str[0])
		{
			cout << "Error!" << endl;
			continue;
		}
		size_t found = s.find(str);
		if (found != string::npos)
		{
			string ans;
			for (int i = 0; i < sizo; i++)
			{
				if (i + 1 < sizo && s[i] == str[0] && s[i + 1] == str[0])
				{
					error = true;
				}
				if (s[i] != str[0])
				{
					ans.push_back(s[i]);
				}
				else
				{
					i++;
					if (!(isupper(s[i])))
						ans.push_back(toupper(s[i]));
					else error = true;
				}

			}
			if (error)cout << "Error!" << endl;
			else
				cout << ans << endl;
		}
		else
		{
			string ans;
			for (int i = 0; i < sizo; i++)
			{
				if (islower(s[i]))
				{
					ans.push_back(s[i]);

				}
				else
				{
					ans.push_back(str[0]);

					ans.push_back(tolower(s[i]));
				}

			}
			cout << ans << endl;

		}


	}


	return 0;
}