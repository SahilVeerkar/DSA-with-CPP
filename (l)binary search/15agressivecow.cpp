#include <iostream>
using namespace std;
int main()
{
  int arr[5] = {1, 2, 4, 8, 9};
  int c = 3;
  int n = 5;
  int s = 1;
  int e = arr[n - 1] - arr[0];
  int mid;
  int ans = -1;
  while (s <= e)
  {
    mid = s + (e - s) / 2;
    int cow = 1;
    int position = arr[0];
    for (int i = 0; i < n; i++)
    {
      if (arr[i] - position >= mid)
      {
        cow++;
        position = arr[i];
      }
    }
    if (cow >= c)
    {
      s = mid + 1;
      ans = mid;
    }
    else
    {
      e = mid - 1;
    }
  }
  cout << ans;
}