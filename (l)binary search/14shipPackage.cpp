#include <iostream>
using namespace std;
int main()
{
  int s = 0;
  int e = 0;
  int ans = -1;
  int mid;
  int arr[6] = {3, 2, 2, 4, 1, 4};
  int n = 6;
  int days = 3;
  for (int i = 0; i < n; i++)
  {
    s = max(s, arr[i]);
    e += arr[i];
  }
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    int pack = 0;
    int day = 1;
    for (int i = 0; i < n; i++)
    {
      pack = pack + arr[i];
      if (pack > mid)
      {
        day++;
        pack = arr[i];
      }
    }
    if (day <= days)
    {
      e = mid - 1;
      ans = mid;
    }
    else
    {
      s = mid + 1;
    }
  }
  cout << ans;
}