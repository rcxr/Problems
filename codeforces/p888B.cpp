#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, x=0, y=0;
  string A;
  cin >> n;
  cin >> A;
  for(int i=0; i<n; i++)
  {
    switch(A[i])
    {
      case 'U': y--; break;
      case 'R': x++; break;
      case 'D': y++; break;
      case 'L': x--; break;
    }
  }
  x = abs(x);
  y = abs(y);
  cout << n - x - y;
  return 0;
}
