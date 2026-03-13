#include <iostream>
using namespace std;
int main()
{
  int arr[4] = {12, 34, 67, 90};
  int n = 4;
  int k = 2;
  int s = 0;
  int e = 0;
  int ans = 0;
  int mid = s + (e - s) / 2;
  for (int i = 0; i < n; i++)
  {
    s = max(arr[i], s);
    e += arr[i];
  }
  while (s < e)
  {
    mid = s + (e - s) / 2;
    int page = 0;
    int student = 1;
    for (int i = 0; i < n; i++)
    {
      page = page + arr[i];
      if (page > mid)
      {
        student++;
        page = arr[i];
      }
    }
    if (student <= k)
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