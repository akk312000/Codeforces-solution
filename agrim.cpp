#include<bits/stdc++.h>
using namespace std; int n, m; char arr[20][20];
int main()
{
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      cin >> arr[i][j];
    }
  }

  int ans;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      int r = 0;

      while (arr[i + r][j] == 'G' && arr[i - r][j] == 'G' && arr[i][j + r] == 'G' && arr[i][j - r] == 'G')
      {
        arr[i + r][j] = arr[i - r][j] = arr[i][j + r] = arr[i][j - r] = 'g';
        for (int x = 1; x <= n; x++)
        {
          for (int y = 1; y <= m; y++)
          {
            int R = 0;
            while (arr[x + R][y] == 'G' && arr[x - R][y] == 'G' && arr[x][y + R] == 'G' && arr[x][y - R] == 'G')
            {
              ans = max(ans, (1 + 4 * r) * (1 + 4 * R));
              R++;
            }

          }
        }
        r++;
      }



      r = 0;
      while (arr[i + r][j] == 'g' && arr[i - r][j] == 'g' && arr[i][j + r] == 'g' && arr[i][j - r] == 'g')
      {
        arr[i + r][j] = arr[i - r][j] = arr[i][j + r] = arr[i][j - r] = 'G';
        r++;
      }

    }
  }
  cout << ans << endl;



  return 0;
}