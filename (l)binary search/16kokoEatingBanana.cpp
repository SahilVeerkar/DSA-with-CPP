#include <iostream>
using namespace std;
int main()
{
  int arr[4] = {3, 6, 7, 11};
  int s = 1;
  int e = 0;
  int ans = -1;
  int mid;
  int n = 4;
  int h = 8;
  for (int i = 0; i < n; i++)
  {
    e = max(e, arr[i]);
  }
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    int totaltime = 0;
    for (int i = 0; i < n; i++)
    {
      totaltime = totaltime + arr[i] / mid;
      if (arr[i] % mid != 0)
      {
        totaltime++;
      }
    }
    if (totaltime > h)
    {
      s = mid + 1;
    }
    else
    {
      e = mid - 1;
      ans = mid;
    }
  }
  cout << ans;
}