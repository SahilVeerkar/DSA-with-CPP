#include <iostream>
using namespace std;
int main()
{
  int k = 3;
  int s = 0;
  int e = 0;
  int ans = -1;
  int arr[5] = {5, 10, 30, 20, 15};
  int n = 5;
  int mid = s + (e - s) / 2;
  for (int i = 0; i < n; i++)
  {
    s = max(s, arr[i]);
    e += arr[i];
  }
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    int wall = 0;
    int painter = 1;
    for (int i = 0; i < n; i++)
    {
      wall = wall + arr[i];
      if (wall > mid)
      {
        painter++;
        wall = arr[i];
      }
    }
    if (painter <= k)
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